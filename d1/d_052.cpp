#include <iostream>
#include <cctype>

using std::string;

int main() {
    string str;
    std::cout << "�������ַ�����";
    std::cin >> str;

    int count = 0;
    for (int i = 0; str[i];) {
        if (((unsigned) str[i] < 0x80)) { // ASCII �ַ�
            count++;
            i++;
        } else { // �����ַ�
            count++;
            i += 2;
        }
    }

    std::cout << "�ַ�������Ϊ��" << count << std::endl;


    return 0;
}
