#include <iostream>
class Role2 {
 public:
  int HP;
  int lv = 100;
  int damage = 200;
  Role2(Role2& role) : HP(role.HP) {//只会初始化指定的值
    std::cout << "调用了副本构造函数" << std::endl;
  }


  /* Role2(int _lv, int _damage) {
    std::cout << lv << damage << std::endl;
    std::cout << "有参构造函数" << std::endl;
    lv = _lv;
    damage = _damage;
    std::cout << lv << damage << std::endl;
  }*/

  /*成员得按顺序初始化,HP初始化为lv*3,但lv此时值是未知的*/
  /*Role2(int _lv, int _damage) : lv(_lv), damage(_damage), HP(lv * 3) {//效率更高,某些情况下只能使用这种方式进行初始化
    std::cout << lv << damage << std::endl;
    std::cout << "有参构造函数" << std::endl;
    std::cout << lv << damage << std::endl;
  }*/

  Role2(int _lv, int _damage) : Role2(_lv) {
    std::cout << "lv:" << lv << "damage:" << damage << std::endl;
    std::cout << "有参构造函数" << std::endl;
//    lv = _lv;
    damage = _damage;
    std::cout << "lv:" << lv << "damage:" << damage << std::endl;
  }
  Role2(int lv) {
    std::cout << "委托构造函数" << std::endl;
    this->lv = lv;
  }
  int GetHp() const {
    return HP;
  };
  void SetHp(int hp) {
    HP = hp;
  }
  int GetLv() const {
    return lv;
  }
  void SetLv(int lv) {
    Role2::lv = lv;
  }
  int GetDamage() const {
    return damage;
  }
  void SetDamage(int damage) {
    Role2::damage = damage;
  }
};

int main() {
  Role2 t1(50, 20);
//  std::cout << t1.GetHp() << std::endl;
//  std::cout << t1.get << std::endl;
  Role2 t2(t1);//编译器默认提供了一个副本构造函数,我们也可以手动指定副本构造函数
  std::cout << "_________________" << std::endl;
//  std::cout << t2.GetHp() << std::endl;
  std::cout << t2.GetLv() << std::endl;
  std::cout << t2.GetDamage() << std::endl;

  Role2 t3=t1;//此时通过调用副本构造函数来完成t3的初始化
  t3=t1;//t3以及完成初始化了 不会再调用构造函数了
}
