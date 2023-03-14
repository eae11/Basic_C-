#include <iostream>
#include <conio.h>

int main() {
    unsigned password;
    unsigned repassword;
    input:
    std::cout << "请输入6位数密码" << std::endl;
    std::cin >> password;
    std::cout << "再次入6位数密码" << std::endl;
    std::cin >> repassword;
    if (password == repassword) {
        if (password > 999999) {
            goto input;
        }
        std::cout << "再次输入任意键开始破解密码" << std::endl;

        int testPassword = _getch();;
        hack:
        if (testPassword != password) {
            testPassword++;
            goto hack;
        } else {
            std::cout << "密码破解为" << testPassword << std::endl;
        }


    } else {
        goto input;
    }
}
