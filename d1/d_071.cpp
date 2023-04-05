#include <iostream>

template<typename type1>
type1 bigger(type1 a,type1 b,type1 c) {
  return a + b + c;
}

template<typename type1>
type1 bigger(type1 a,type1 b) {
  return a > b ? a : b;
}

template<>
int *bigger(int *a,int *b) {//函数模板的例外情况
  return *a > *b ? a : b;
}

int *bigger(int *a,int *b) {//函数重载
  return *a > *b ? a : b;
}

int main() {

  int a{200},b{100},c{};
  c = bigger(a,b);
  std::cout << c << std::endl;
  c = *bigger(&a,&b);//函数重载优先于函数模板
  std::cout << c << std::endl;

  bigger(1,2,3);//函数模板也可以重载

}
