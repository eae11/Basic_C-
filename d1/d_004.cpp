#include <iostream>

int main() {
    std::cout << 23l << std::endl;//l����long����
    std::cout << 23ll << std::endl;//ll->long long����
    std::cout << 23ull << std::endl;//unsigned long long����
    std::cout << 230.0L << std::endl;//long double
    std::cout << 130.0 << std::endl;//double
    std::cout << 130.0f << std::endl;//float

    float a{65923600.0}, b{0.000001}, c{a + b};
    std::cout << "c=" << c<<std::endl;

    std::cout << "����Բ��ֱ��"<<std::endl;
    double d;
    std::cin>>d;
    double r{d/2};
    double s{r*r*3.141};

    std::cout << "ֱ��Ϊ"<<d <<"��Բ�����Ϊ"<<s<<"ƽ������"<< std::endl;
}
