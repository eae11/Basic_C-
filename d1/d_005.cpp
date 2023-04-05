#include <iostream>

/*
类型转换从高到低
long double
double
float
unsigned long long
long long
unsigned long
long
unsigned int
int
*/


int main() {
  float d=50.0f;
  int a{500};
  unsigned int b{1000};

  std::cout << a - b << std::endl;

  std::cout << int(a - b) << std::endl;//转成int c写法

  std::cout << static_cast<int>(a - b) << std::endl;//c++写法

  long long c{500};

  std::cout << c - b << std::endl;//某些编译器unsigned int等级比long大
  int e{static_cast<int>( d)};
  e = (int) d;
}
