
#include <iostream>
/*类型推断*/
int main() {


  auto a{200};
  auto b{30LL};
  auto c{30L};
  auto d{U'a'};
  auto e{u'a'};
  std::cout << "变量a的类型为"<<typeid(a).name() << std::endl;//typeid(变量).name()查看变量的类型
  std::cout << "变量b的类型为"<<typeid(b).name() << std::endl;
  std::cout << "变量c的类型为"<<typeid(c).name() << std::endl;
  std::cout << "变量d的类型为"<<typeid(d).name() << std::endl;
  std::cout << "变量e的类型为"<<typeid(e).name() << std::endl;


}
