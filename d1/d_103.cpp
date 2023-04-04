#include <iostream>
class HPMed {
  int Recover{100};
};
class Role {
  int hp;
  int maxHp;
 public:
  Role() {
    hp = 1000;
    maxHp = 3500;
  }
  void GetHp() {
    std::cout << "HP:" << hp << "\\" << maxHp << std::endl;
  }
};
int main() {
  int* a = new int[100];
}
