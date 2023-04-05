#include <iostream>

using std::string;

int main() {
  string str{"id=user;pass=6321123123123123123105;role=郝英俊;money=653201;diamond=99990;"};
  string strIn;
  string strOut;
  while (true) {
    std::cout << "请输入您要查阅的属性:\n";
    std::cin >> strIn; //要输入的字符串 属性
    int lfind = str.find(strIn + "=");
    if (lfind == -1)
      std::cout << "对不起,您要查阅的属性不存在!";
    else {
      int lend = str.find(";",lfind);
      strOut = str.substr(lfind+strIn.length() + 1,lend - lfind - strIn.length() - 1);
      std::cout << strOut;
    }

  }


}
