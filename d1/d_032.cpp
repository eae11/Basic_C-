#include <iostream>

int main() {


    char inKey{};
    do {
        int num;
        std::cout << "������һ����";
        std::cin >> num;
        bool flag;
        flag = (num % 2 != 0);
        for (int i = 3; (flag) && (i <= sqrt(num)); i+=2) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            std::cout << "������";
        } else {
            std::cout << "��������";
        }
        std::cout << "��y��������������˳�";
        std::cin >> inKey;
    } while (inKey == 'y' || inKey == 'Y');

}
