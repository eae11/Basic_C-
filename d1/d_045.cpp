#include <iostream>

int main() {
    int a{5250};
    int c{3000};
    int &la{a};//����a������
    int &la1{la};
    int &la2{a};
    la2++;
    std::cout << a << std::endl;
    std::cout << la << std::endl;

    std::cout << &a << std::endl;
    std::cout << &la << std::endl;
    std::cout << &la1 << std::endl;
    std::cout << &la2 << std::endl;//��ַ��һ��

    la = c;//����һ���趨�Ͳ��ܸı���, �����൱��a=c
    std::cout << a << std::endl;

    int b[]{1001,1002,1003,1004};
    /*for (auto x: b) {
        x++;//�ֲ�����b�����ֵ����ı�
    }*/
    for (auto &x: b) {
        x++;//b�����ֵ��ı�
    }
    for (auto x: b) {
        std::cout << x << std::endl;
    }

}
