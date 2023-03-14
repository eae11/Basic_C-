#include <iostream>

int main() {
    bool a = 500;
    std::cout << a << std::endl;
    bool b = 1;
    std::cout << std::boolalpha;//打印true而不是1
    std::cout << b << std::endl;

    int c;
    std::cout << "输出c的值" << std::endl;
    std::cin >> c;
    if (c == 0) {
        std::cout << "123";
    }
    if (c) { //相当于 c!=0
        std::cout << "456" << std::endl;
    }
    int p = 500;
    if (p > 100) {
        std::cout << ">100" << std::endl;
    } else if (p < 50) {
        std::cout << "<50" << std::endl;
    } else {
        std::cout << ".." << std::endl;
    }
}
