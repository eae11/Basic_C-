#include <iostream>
class T {
 public:
//  static int count;
  inline static int count{};//利用inline关键字可以在类的说明中定义静态成员变量
  inline static const int count2{};
  /*
  我们可以利用static关键字声明一个类的静态成员函数,类的静态成员函数有如下特点:
(1)不管有没有创建类的实例,都可以访问类的静态成员函数
(2)类的静态成员函数不能访问非静态的成员变量
(3)类的静态成员函数不能是const
(4)类的静态成员函数不能使用this指针

   */
  static void Test(){

  }

  T() {
    count++;
  }
  ~T() {
    count--;
  }
};
//int T::count = 5;
void test() {
  T t1, t2, t3;
}
int main() {
  T::Test();
  T t1, t2, t3, t4;
  T t5;
  //T的所有实例 静态变量是共享的
  test();
  std::cout << T::count << std::endl;

}
