// class7.4.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

int main() {

    char a;
    linput:
    printf("��������һ����д��ĸ,���ǽ�����ת��ΪСд\n");
    std::cin >> a;
    if (a > 64 && a < 91) {
        a += 32;
        std::cout << a;
        goto linput;
    } else {
        printf("����������ݲ��������ǵ�Ҫ��,����������!\n");
        goto linput;
    }
}
