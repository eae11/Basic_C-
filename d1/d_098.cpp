#include <iostream>
enum class WeaponLv {
  normal,
  high,
  rare,
  epic

};

class Role {
/*嵌套类可以访问外层类的所有成员(没有引用只能访问静态的)
 外层类仅能访问嵌套类的公有成员
 */
 public:
  void test1() {

  }
  static void test() {

  }
  Role() {
    Weapon::test2();
  }
 public:
  class Weapon {
    Weapon* ReturnW();
   public:
    static void test2() {

    }
   public:
    Weapon() {
//      test1();
      test();//嵌套类只能调用外层类的静态函数
//      hp++;//如果没有外层类对象的引用或指针，则无法直接访问外层类的非静态成员变量。
      Role role;
      role.hp++;
      std::cout << "weapon" << std::endl;
    }
    short lv;
    WeaponLv wlv;
    void f1() {

    }
  };
  int hp;
  int mp;
  Weapon leftHands;
};

/*Role::Weapon::Weapon() {
  std::cout << "weapon" << std::endl;
}*/
Role::Weapon* Role::Weapon::ReturnW() {
  return this;
}
int a1;
int main() {
  Role rl;
  Role::Weapon weapon;
  Role::test();
  /*
   定义在函数内的类称为局部类
   1.局部类的定义必须写在类内
   2.局部类中不允许使用静态成员变量
   3.局部类可以访问全局变量
   */
  class T {
    int hp;
    int mp;
    static void f2() {

    };
    void f1() {
      a1 = 250;
    };
  };
}
