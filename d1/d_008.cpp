
#include <iostream>
/*�����ƶ�*/
int main() {


    auto a{200};
    auto b{30LL};
    auto c{30L};
    auto d{U'a'};
    auto e{u'a'};
    std::cout << "����a������Ϊ"<<typeid(a).name() << std::endl;//typeid(����).name()�鿴����������
    std::cout << "����b������Ϊ"<<typeid(b).name() << std::endl;
    std::cout << "����c������Ϊ"<<typeid(c).name() << std::endl;
    std::cout << "����d������Ϊ"<<typeid(d).name() << std::endl;
    std::cout << "����e������Ϊ"<<typeid(e).name() << std::endl;


}
