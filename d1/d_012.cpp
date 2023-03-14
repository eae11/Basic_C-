#include <iostream>
/*自定义类型名*/
int main() {
    typedef int INT;
    INT b{7};
    std::cout << typeid(b).name()<<std::endl;

    using INT32 =int;
    INT32 c{6};
    std::cout << typeid(c).name() << std::endl;
}
