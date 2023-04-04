#ifndef BASIC_C___D1_ROLE_H_
#define BASIC_C___D1_ROLE_H_

class Role {
 private:
  int hpRecover;
  void Init();
  int hp;
 public:
  int damage;
  //mutable声明的成员变量可以被const成员函数修改
  mutable int lv;
  void Act(Role& role);
  inline /*const*/ int GetHp() const { //const写前面是代表返回值是const 写后面代表这个函数是const类型
    //在const成员函数下,this指针也变成了const指针
//    this->damage=2;

//    SetLv(2);
//    lv=3;
    return hp;
  }
  Role* bigger(Role* role);
  Role& SetHpRecover(int hp_recover);
  Role& SetHp(int hp);
  Role& SetDamage(int damage);
  Role& SetLv(int lv);
  const int& GetLv() const;
  int GetDamage() const;
  int Role::GetDamage();
  bool IsBig(Role r1) {
    return r1.GetLv() > lv;
  }
  explicit Role(int _lv = 500) {
    std::cout << -_lv << std::endl;
    lv = _lv;
  }
};

#endif //BASIC_C___D1_ROLE_H_
