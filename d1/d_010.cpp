#include <iostream>
#include <locale>

int main() {
    int a{ 10 };

    int b{ 5 };

    int c{ 6 };

    c = b + a++;
    c = b++ + a;

    c=b+++a; // b+  ++a;   b++ +a; ��׺����,����ɺ�������
    return 0;

}
