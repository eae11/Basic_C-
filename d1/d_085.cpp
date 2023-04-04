#include <iostream>
#include <bitset>
#include "d_085_1.h"
namespace t {
int a = 100;
}
int a = 66;
namespace t {
int height{100};
}
/*所有具有链接属性的对象,只要没有定义命名空间,就默认定义在全局命名空间中,
 * 全局命名空间中成员的访问不用显示的指定,当局部名称覆盖了全局名称时才需要显式的指定全局命名空间;*/

namespace hkd {
int b = 25;//定义
void test() {
  std::cout << b << std::endl;
}
namespace hack {
void f1() {
  std::cout << "f1" << std::endl;
}
}
}
namespace h1 = hkd::hack;//命名空间取别名
/*int hkd::b{250};//定义
void hkd::test() {
  std::cout << hkd::b << std::endl;
};
void hkd::hack::f1() {
  std::cout << "f1" << std::endl;
}*/
/*static void Thack(){ //现在不推荐用static了用未命名的namespace
  std::cout << "thack" << std::endl;
}*/

namespace {
void Thack() {
  std::cout << "thack" << std::endl;
}
}
int main() {
  int a = 50;
  std::cout << t::a << std::endl;
  std::cout << a << std::endl;
  std::cout << ::a << std::endl;
  std::cout << hkd::b << std::endl;
  Thack();
  hkd::hack::f1();
  h1::f1();
}
