#include <iostream>

/*
����ת���Ӹߵ���
long double
double
float
unsigned long long
long long
unsigned long
long
unsigned int
int
*/


int main() {
    float d=50.0f;
    int a{500};
    unsigned int b{1000};

    std::cout << a - b << std::endl;

    std::cout << int(a - b) << std::endl;//ת��int cд��

    std::cout << static_cast<int>(a - b) << std::endl;//c++д��

    long long c{500};

    std::cout << c - b << std::endl;//ĳЩ������unsigned int�ȼ���long��
    int e{static_cast<int>( d)};
    e = (int) d;
}
