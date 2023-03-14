#include <iostream>

int main() {
    int a{5250};
    int c{3000};
    int &la{a};//都是a的引用
    int &la1{la};
    int &la2{a};
    la2++;
    std::cout << a << std::endl;
    std::cout << la << std::endl;

    std::cout << &a << std::endl;
    std::cout << &la << std::endl;
    std::cout << &la1 << std::endl;
    std::cout << &la2 << std::endl;//地址都一样

    la = c;//引用一旦设定就不能改变了, 这里相当于a=c
    std::cout << a << std::endl;

    int b[]{1001,1002,1003,1004};
    /*for (auto x: b) {
        x++;//局部变量b里面的值不会改变
    }*/
    for (auto &x: b) {
        x++;//b里面的值会改变
    }
    for (auto x: b) {
        std::cout << x << std::endl;
    }

}
