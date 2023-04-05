#include <iostream>

template<typename T1,typename T2>
T1 ave(T1 a,T2 b) {
  return (a + b) / 2;
}

template<typename T1,typename T2,typename TR>
TR ave2(T1 a,T2 b) {
  return (a + b) / 2;
}

template<typename TR,typename T1,typename T2>
TR ave3(T1 a,T2 b) {
  return (a + b) / 2;
}

template<typename TR,typename T1,typename T2>
TR ave4(int a,T1 b,T2 c,int d = 200) {
  T1 x;
  T2 y;
  return (a + b) / 2;
}

template<typename T1,typename T2>
auto bigger(T1 a,T2 b) -> decltype(a > b ? a : b) {
  return a > b ? a : b;
}

template<typename T1,typename T2>
decltype(auto) bigger2(T1 &a,T2 &b) {
  return a > b ? a : b;
}

int main() {
  /* std::cout << ave(100,200.2f) << std::endl;
   std::cout << ave<float,int>(100.2F,200.2F) << std::endl;
   std::cout << ave2<int,float,double>(100,200.2f) << std::endl;
   std::cout << ave3<double>(100,200.2f) << std::endl;

   char a = 50;
   int b = 50000;
   std::cout << bigger(a,b) << std::endl;*/

  /* char a = 5;
   int b = 50;
   decltype(a > b ? a : b) x;//为什么不返回int & 因为如果a比较大 返回 int &p=a; int &是不能指向一个char类型的*/




  /*float a = 50;
  int b = 5000;
//    float &lx=b;//如果b大会强转成float,float引用不能指向一个int值,因此不会返回一个float引用
  bigger2(a,b);*/





  /*int a = 1;
  double b = 5;
  ++(a > b ? a : b);*/
  /* int a = 5,b = 3;
   ++(a > b ? a : b);*/
}
