#include <iostream>
#include "d_078_2.h"
extern "C" {
#include "d_078_1.h" //��������ôд
}
/*int ave() {
  return 2001;
}*/
/*int xve() {//C�޷���C++�ĺ���
  return 3;
}*/
//extern "C" int xve() {//���Ƕ����C���ĺ���
//  return 3;
//}
int xve() {//Ҳ������ͷ�ļ��ﶨ��
  return 3;
}
int main() {
  std::cout << ave() << std::endl;//C++��C���Եĺ���
  std::cout << pve() << std::endl;
}

