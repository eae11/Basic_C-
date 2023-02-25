#include <iostream>

int main() {
    std::cout << 23l << std::endl;//l代表long类型
    std::cout << 23ll << std::endl;//ll->long long类型
    std::cout << 23ull << std::endl;//unsigned long long类型
    std::cout << 230.0L << std::endl;//long double
    std::cout << 130.0 << std::endl;//double
    std::cout << 130.0f << std::endl;//float

    float a{65923600.0}, b{0.000001}, c{a + b};
    std::cout << "c=" << c<<std::endl;

    std::cout << "输入圆的直径"<<std::endl;
    double d;
    std::cin>>d;
    double r{d/2};
    double s{r*r*3.141};

    std::cout << "直径为"<<d <<"的圆的面积为"<<s<<"平方厘米"<< std::endl;
}
