#include <iostream>
#include <iomanip>

int main() {

    std::cout << std::fixed;//��С��ģʽ���
    std::cout << 3e20 << '\n';

    std::cout << std::scientific;//��ѧ������
    std::cout << 3.1546 << std::endl;

    std::cout << std::defaultfloat;//�ָ�Ĭ��
    std::cout << 3.1546 << std::endl;

    std::cout << std::setprecision(3);//����С�����Ȱ���������λ
    std::cout << 43.1545646 << std::endl;

    std::cout << std::showbase;//ʮ���ƺͰ˽�����ʾǰ׺
//    std::cout << std::noshowbase;//�ر�
    std::cout << 65535 << std::endl;

    std::cout << std::hex;
    std::cout << (long long) 65535 * 65535 << std::endl;

    std::cout << std::oct;
    std::cout << 8 << std::endl;

    std::cout << std::dec;
    std::cout << std::left;//��߶��� Ĭ���ұ�
    std::cout << std::setw(10)<<221 << std::endl;//std::setw(10)����һ����һ�� ֮ǰ��������һ��һֱ��Ч
    std::cout << std::setw(10)<<21 << std::endl;
    std::cout << std::setfill('*')<<std::setw(10)<<45645 ;
    std::cout <<std::setw(10)<<21665 << std::endl;

    std::cout << std::right;
    std::cout << "ž�ž���"<<std::setw(20)<<"12 "<<"66";


}
