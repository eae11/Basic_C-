#include <iostream>
#include "d_082_1.h"
extern const int p = 999;//��������������ת����Ԫ��Ҳ��Ч
//inline int p3=800;//���ⲿ��������
static int x = 260;//�����ƽ����ڱ�ת����Ԫ����Ч
const int l=99;//�����ƽ����ڱ�ת����Ԫ����Ч
/*
void test (){
  std::cout << "test" << std::endl;
}*/
void f2(){
  std::cout << p3 << std::endl;//����800����600
  std::cout << x << std::endl;//260
  std::cout << l << std::endl;//99
}
inline void f3(){
  std::cout << "f4" << std::endl;
}
void ptest(){
  f3();
}