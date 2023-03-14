#include <iostream>
#include <string>
#include <iomanip>

using std::string;

typedef struct Role {
  string Id;
  int Exp;
} * PROLE;

int GetDataCount(string strData) {
  int count{};
  for (int i = 0; i < strData.length(); ++i) {
    if (strData[i] == ';') {
      count++;
      i += 3;
    }
  }
  return count / 2;
}
void GetStringData(PROLE pRole, string& strData, int position1) {
  position1 = strData.find("id=", position1);
  if (position1 == std::string::npos) {
    return;
  }
  int position2 = strData.find(";", position1 + 3);
  pRole->Id = strData.substr(position1 + 3, position2 - position1 - 3);
  position1 = position2 + 1;
  position1 = strData.find("exp=", position1);
  position2 = strData.find(";", position1 + 4);
  pRole->Exp = std::stoi(strData.substr(position1 + 4, position2 - position1 - 4));
  position1 = position2 + 1;
  return GetStringData(++pRole, strData, position1);
}

int main() {
  string strData =
      "id=Tomy Clare;exp=9523;id=Sunny;exp=9523;id=DyBaby;exp=25301;id=Simple;exp=25301;id=Bkacs11;exp=2100;id=DumpX;exp=36520;";
  int count{GetDataCount(strData)};
  PROLE pRole = new Role[count];
  GetStringData(pRole, strData, 0);

  for (int i = 0; i < count - 1; ++i) {
    for (int j = 0; j < count - i - 1; ++j) {
      if (pRole[j].Exp < pRole[j + 1].Exp) {
        Role temp = pRole[j];
        pRole[j] = pRole[j + 1];
        pRole[j + 1] = temp;
      } else if (pRole[j].Exp == pRole[j + 1].Exp) {
        if (pRole[j].Id.compare(pRole[j + 1].Id) < 0) {
          Role temp = pRole[j];
          pRole[j] = pRole[j + 1];
          pRole[j + 1] = temp;
        }
      }
    }
  }

  for (int i = 0; i < count; ++i) {

    std::cout << std::left << "Õ½Á¦  " << std::setw(8) << pRole[i].Exp << "Íæ¼Ò   " << pRole[i].Id << std::endl;
  }
}
