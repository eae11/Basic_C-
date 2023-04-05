#include <iostream>
//#include "d_082_1.h"
extern const int p = 999;//该名称在其他的转换单元中也有效
inline int p3=800;//有外部链接属性
static int x = 260;//该名称仅仅在本转换单元中有效
const int l=99;//该名称仅仅在本转换单元中有效
/*
void test (){
  std::cout << "test" << std::endl;
}*/
void f2(){
  std::cout << p3 << std::endl;//不是800而是600
  std::cout << x << std::endl;//260
  std::cout << l << std::endl;//99
}
inline void f3(){
  std::cout << "f4" << std::endl;
}
void ptest(){
  f3();
}