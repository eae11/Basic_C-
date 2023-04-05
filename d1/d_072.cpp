#include <iostream>

/*auto ave(int a,int b) {
    return a + b;
}*/

//int &bigger(int &a,int &b) {
//auto bigger(int &a,int &b) {
//    return a > b ? a : b;//auto会把a或者b转换为int类型
//}

/*auto bigger(int &a,int &b) -> int & {//强制返回->后面的类型
    return a > b ? a : b;
}*/

//c++11写法
/*auto bigger(int &a,int &b) -> decltype(a > b ? a : b) {
    return a > b ? a : b;
}*/

//c++14可以这么写
decltype(auto) bigger(int &a,int &b) {
  return a > b ? a : b;
}

int ave(int a,int b) {
  std::cout << "decltype" << std::endl;
  return a + b;
}

int ave1(int a,int b) {
  std::cout << "auto" << std::endl;
  return a + b;
}

int main() {
  /*const int a{1500};
  auto b = a;//auto会把const删除掉*/

  /*int c{2500};
  int &lb{c};

  auto d = lb;//引用也会丢掉*/

//    auto e = ave(1,2);//根据函数的返回值来确定类型的时候,函数会执行

  /*int a{200},b{300};
  bigger(a,b) = 500;//谁大就返回谁的引用并且赋值500 去掉引用后就是临时变量,不能写入
  std::cout << b << std::endl;*/

//    decltype(表达式)


/*
 * 如果decltype内的表达式没经历任何运算,那么得出的数据类型同表达式内的数据类型,并且decltype可以保留const和引用类型;
 */
//    const int c{100};
//    decltype(c) x = 500;
//    return 0;

  /*
   *如果decltype内的表达式经历了运算那么得出的数据类型是根据运算结果是否有固定的内存地址(左值)来决定的,
   * 如果有固定的内存地址则得出的类型为该类型的引用类型,如果没有固定的内存地址,则得出的类型为该结果的类型
   */
//    int a{100},b{50};
//    int *pa{&a};
//    decltype(a+b) x;//a+b是一个临时变量,不是a,b各种有自己的内存地址,所以为int类型
//    decltype(*pa) x = a;//*pa是int类型,经历了*运算,并且a有固定的内存地址,所以为int &类型
//    decltype(*pa+1) x = a;


  /*
   *如果decltype内的表达式是一个函数,那么得出的数据类型是根据函数的返回类型来确定的;
   * decltype不会真的执行表达式的运算,因此ave函数并未执行
  */
  /*decltype(ave(100,200)) x;//相当于int x
  auto e = ave1(1,2);//函数会执行*/

  /* int a = 10;
   int b = 1;
//    decltype(a++) x;
   decltype(++a) x = b;*/


}