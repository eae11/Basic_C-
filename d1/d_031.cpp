// class9.1.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
#include <cmath>

int main() {
    char inKey{'y'};
    while (inKey == 'y' || inKey == 'Y') {
        int num;
        std::cout << "������һ����" << std::endl;
        std::cin >> num;
        bool flag;
        flag = (num % 2 != 0);
        for (int i = 3; (flag) && (i <= sqrt(num)); i += 2) {
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
        std::cout << "��y�����ж�,����������˳�" << std::endl;
        std::cin >> inKey;
    }
}
