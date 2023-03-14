#include <iostream>
#include "d_078_2.h"
extern "C" {
#include "d_078_1.h" //还可以这么写
}
/*int ave() {
  return 2001;
}*/
/*int xve() {//C无法调C++的函数
  return 3;
}*/
//extern "C" int xve() {//除非定义成C风格的函数
//  return 3;
//}
int xve() {//也可以在头文件里定义
  return 3;
}
int main() {
  std::cout << ave() << std::endl;//C++调C语言的函数
  std::cout << pve() << std::endl;
}

