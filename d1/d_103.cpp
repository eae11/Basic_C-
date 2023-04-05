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
  std::cout << "啊啊啊" << std::endl;
}
