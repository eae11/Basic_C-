#include <iostream>
#include "Role.h"
void Role::Init() {
  hpRecover = 3;
}
void Role::Act(Role& role) {
  role.hp -= damage;
}

Role* Role::bigger(Role* role) {
  return role->lv > lv ? role : this;
}
Role& Role::SetHpRecover(int hp_recover) {
  hpRecover = hp_recover;
  return *this;
}
Role& Role::SetHp(int hp) {
  Role::hp = hp;
  return *this;
}
Role& Role::SetDamage(int damage) {
  Role::damage = damage;
  return *this;
}
Role& Role::SetLv(int lv) {
  Role::lv = lv;
  return *this;
}

const int& Role::GetLv() const {
  return lv;
}
int Role::GetDamage() const {
  lv++;
  std::cout << "const damage" << std::endl;
  return damage;
}
int Role::GetDamage() {
  std::cout << "damage" << std::endl;
  return damage;
}
