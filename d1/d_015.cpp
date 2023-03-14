#include <iostream>
/*
 * a^b=c
 * b^c=a
 * a^c=b
 */
int main() {
    unsigned int diamond{6000};
    unsigned int vip_exp{80000};

    unsigned xbase=diamond^vip_exp;

    std::cout << "修改钻石数量"<<std::endl;
    std::cin >> diamond;
    std::cout << "修改累计消费"<<std::endl;
    std::cin >> vip_exp;
    /*模拟检测一次*/

    unsigned realDiamond = xbase ^ vip_exp;
    unsigned realVip_exp= xbase ^ diamond;

    std::cout << "你现在的钻石数量"<<diamond<<"你应该的钻石数量"<<realDiamond<<std::endl;
    std::cout << "你现在的累计消费"<<vip_exp<<"你应该的累计消费"<<realVip_exp<<std::endl;

}
