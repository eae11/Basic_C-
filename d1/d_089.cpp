#include <iostream>
class Role {
 private:
  int lv;
  int hpRecover;
  void init();
 public:
  int damage;
  int hp;
  void Act(Role& role);
};
void Role::Act(Role& role) {
  role.hp -= damage;
}
void Role::init() {
  hpRecover = 3;
}

class P {

};
int main() {
  Role user;
  std::cout << sizeof(user) << std::endl;
  P p1, p2;
  std::cout << sizeof(p1) << std::endl;//空类一个字节
  std::cout << &p1 << std::endl;
  std::cout << &p2 << std::endl;

}
