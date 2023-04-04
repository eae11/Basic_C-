#include <iostream>
#include "Role.h"
void test(Role* p) {
  p->SetHp(5000);
}

int main() {
  const Role user{};//const ���ε� �������޸����Ա������ֵ
  Role monster;
  const Role* puser{&monster};
  puser->GetHp();//const����ֻ�ܵ���const���εĺ���

//  monster.GetLv() = 200;
//  std::cout << monster.lv << std::endl;

  user.GetDamage();
  monster.GetDamage();
//  test((Role*) &user);
  test(const_cast<Role*> (&user));

  std::cout << user.GetHp() << std::endl;

  Role r1;
  Role r2;
  r1.SetLv(500);
  r2.SetLv(600);
//  std::cout << r1.IsBig(600) << std::endl;;
  std::cout << r1.IsBig(Role(600)) << std::endl;;
}
