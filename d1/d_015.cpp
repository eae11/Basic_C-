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

    std::cout << "�޸���ʯ����"<<std::endl;
    std::cin >> diamond;
    std::cout << "�޸��ۼ�����"<<std::endl;
    std::cin >> vip_exp;
    /*ģ����һ��*/

    unsigned realDiamond = xbase ^ vip_exp;
    unsigned realVip_exp= xbase ^ diamond;

    std::cout << "�����ڵ���ʯ����"<<diamond<<"��Ӧ�õ���ʯ����"<<realDiamond<<std::endl;
    std::cout << "�����ڵ��ۼ�����"<<vip_exp<<"��Ӧ�õ��ۼ�����"<<realVip_exp<<std::endl;

}
