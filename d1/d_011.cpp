#include <iostream>

/*枚举*/
int main() {
  /*枚举类型默认int 只能是整数*/
  enum class EquipLv : int {
    normal = 1, armyA = normal,//同一级
    high, armyB = high,
    rare, armyC = rare,
    epic, armyD = epic,
    myth, armyE = myth,
    legend, armyF = legend,
  };

  EquipLv w1 = EquipLv::normal;
  EquipLv w2 = EquipLv::high;
  EquipLv w3 = EquipLv::rare;
  EquipLv w4 = EquipLv::epic;
  EquipLv w5 = EquipLv::myth;
  EquipLv w6 = EquipLv::legend;
  EquipLv w7 = EquipLv::armyA;
  EquipLv w8 = EquipLv::armyB;

  short diff = (int) w6 - (int) w1;
  std::cout << "装备等级差为" << diff << std::endl;
  std::cout << (int) w7 << std::endl;

}
