#include <iostream>
#include <bitset>
/*
 * std::bitset<Ҫ��ʾ�Ķ�����λ��>(Ҫ��ʾ�ı���)
 * */
int main() {
    int a{(int) 0b11111111111111111111111111111111};//0xffffffff
//    std::cout << a << std::endl;
    a<<=8;
    std::cout << std::bitset<32>(a)<<std::endl;

    unsigned b{(unsigned )a};
    b>>=8;
    std::cout << std::bitset<32>(b)<<std::endl;
}
