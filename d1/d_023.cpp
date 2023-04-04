#include <iostream>

int main() {
  if (1) {
    int a = 0;
  } else {
    int b = 0;
  }
  if (int a = 0;1) { //C++17新语法

  } else {
    std::cout << a << std::endl;
  }
  int c = 5;
  switch (c) {
//        int d=6;//错误
    case 1:
//            int p = 6;//错误
      break;
    case2 :
    {
      int a = 6; //正确
    };
      break;
    default :break;
  }
  switch (int a = 6;c) {//c++17新特性
    case 1:std::cout << a << std::endl;
      break;
    case 2 :std::cout << a << std::endl;
      break;
    default :break;
  }
}
