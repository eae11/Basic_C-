#include <iostream>

template<typename type1>
type1 ave(type1 a,type1 b) {
  type1 x = a * b;
  return (a + b + x) / 2;
}

template<typename type1>
type1 bigger(type1 a,type1 b) {
  a = b;
  return a > b ? a : b;
}

int main() {
  std::cout << ave(12.f,2.0f) << std::endl;
  std::cout << ave<int>(12.f,2.0f) << std::endl;//可以显式的为函数模板指定一个类型
  std::cout << ave(11,12) << std::endl;
  std::cout << ave((char) 11,(char) 12) << std::endl;

  int a{100},b{100},c{100};

  c = *bigger(&a,&b);//传进去参数后结果变成了地址求平均值

  int a1{100},b1{12200};
  int c1{100};

  int &la{a1};
  int &lb{b1};
//    c=*bigger(&a1,&b1);
  c = bigger(la,lb);
  std::cout << la << std::endl;
  std::cout << lb << std::endl;
}
