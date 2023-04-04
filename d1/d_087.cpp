#include <iostream>
//关闭assert 得定义在#include <cassert>之前
//#define NDEBUG
//#include <cassert>
//#define assert(expression) ((void)0)

/*assert(bool表达式);
如果括号内的bool表达式为false
则会调用std::abort()函数
弹出右面的对话框
assert宏需要头文件cassert

static_assert用于编译时检查条件

static_assert(bool表达式"错误信息");
C++17新语法
static_assert(bool表达式);
与assert不同,static_assert主要是用来在编译时检查重要的条件
因此检查的bool表达式中,只能用于常量

*/
int main() {
  std::cout << "请输入一个整数" << std::endl;
  int c;
  std::cin >> c;
//  assert(c);
//  static_assert(c, "its 0");
//  static_assert(0, "its 0");
  static_assert(sizeof(int*) == 4, "it's not x86");
  std::cout << 1000 / c << std::endl;

}