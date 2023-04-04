#include <iostream>
#include "Role.h"
int main() {
  Role user;
  Role monster;
  Role* biggerRole = user.bigger(&monster);
  user.SetLv(100).SetDamage(50).SetHp(500).Act(monster);

}
