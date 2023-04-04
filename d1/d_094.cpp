#include <iostream>
/*
在类中还有一种特殊的成员函数,叫做析构函数,析构函数在类的生命周结束时,被自动调用,
 一般用来做扫尾工作,比如释放内存,关闭句柄等等,如果一个类没有定义析构函数,
 那么编译器会自动添加一个空的析构函数,析构函数只能有一个;
 */
class Role {
 public:
  int* p;
  Role() {
    p = new int[100];
    std::cout << "类被创建" << std::endl;
  }
  ~Role() {
    delete[] p;
    std::cout << "类被销毁" << std::endl;
  }
};

int main() {
  Role user;
  int a{1};
  while (a) {
    Role p;
    std::cin>>a;
  }
  std::cout << "end" << std::endl;
}
