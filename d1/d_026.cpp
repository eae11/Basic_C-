#include <iostream>
#include <conio.h>

int main() {
    unsigned password;
    unsigned repassword;
    input:
    std::cout << "������6λ������" << std::endl;
    std::cin >> password;
    std::cout << "�ٴ���6λ������" << std::endl;
    std::cin >> repassword;
    if (password == repassword) {
        if (password > 999999) {
            goto input;
        }
        std::cout << "�ٴ������������ʼ�ƽ�����" << std::endl;

        int testPassword = _getch();;
        hack:
        if (testPassword != password) {
            testPassword++;
            goto hack;
        } else {
            std::cout << "�����ƽ�Ϊ" << testPassword << std::endl;
        }


    } else {
        goto input;
    }
}
