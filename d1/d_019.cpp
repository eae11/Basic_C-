
#include <iostream>

#define dVersion " v1.3"
#define dUrl "http://edoyun.ke.qq.com"

int main() {
/*
�����յ���һλ�û��ļ��������û���Ӳ����Ϊ��930529060092641281
������Ҫ�������û�һ�������룬�ü�������N��16������ ÿ��4λ
����:
192E-987E-675E-3E98-9172-972E
���������Ϸ�еļ���ֳ���ͨ������ü�������Լ����û�����Ϸ.

���Ҹü����������16���ȼ��ĳ�ʼ�����������㷽ʽΪ �ȼ�*�ȼ�*10000
�������û���ʼ�������ԣ���Ϊ16���ȼ����⽫Ӱ�쵽�û��պ�����Ϸ�еı��ʡ�
ͬʱ���ǻ�����������װ�����ֱ��� ���������ף����Σ�������װ���ȼ���Ϊ16���ף����ò�ͬ�ĵȼ��׶Σ���߿���ǿ����16������������������16��ǿ��+16��

ͬʱҪ�����ǵļ����뻹�߱�һ���ķ�α�������ܹ����û���Ӳ�������Ӧ�����������ĵ����в���ʹ��(���Ǽ����û��ύ��Ӳ������Ψһ��)

*/

    //930529060092641281
    system("color 07");
    //setw setfill
    long long m_code{930529060092641281}; //Ӳ���� 0x FFFF FFFFF  0CE9 E740 0000 0001   Ӳ����ͼ������Ӧ

    long long test_code = {0xF2349876EF56CA24LL}; //����һ��������  ��α�������
    int test_code2 = {static_cast<int>(0xF3456878)}; //���ö��Ĳ�����    ��α�����

    int m_code2 = (unsigned long long) m_code >> 32;//��Ӳ�����ǰ8λ(16����) ��������Ӧ  0CE9 E740   216655680

//    std::cout << m_code2;

//    long long end = m_code ^ test_code; //  ������  ����֤�㷨 fedd 7f36 ef56 ca25 FFAC 8F38   �����λ�������
//    std::cout << std::hex << end << std::endl;
//    end ^= test_code;
//    std::cout << end << std::endl;

    unsigned short in_code1{},in_code2{},in_code3{},in_code4{},in_code5{},in_code6{};
    std::cout << "����������鼤����(��һ��):";
    std::cin >> std::hex; //�л�Ϊ16����ģʽ����
    std::cin >> in_code1;
    std::cout << "����������鼤����(�ڶ���):";
    std::cin >> in_code2;
    std::cout << "����������鼤����(������):";
    std::cin >> in_code3;
    std::cout << "����������鼤����(������):";
    std::cin >> in_code4;
    std::cout << "����������鼤����(������):";
    std::cin >> in_code5;
    std::cout << "����������鼤����(������):";
    std::cin >> in_code6;
    long long end{};
    int end2{};
    long long ls{}; //��ʱ����
    int ls2{};//��ʱ����2
    ls = in_code1;
    ls <<= 48;
    end = ls;
    ls = in_code2;
    ls <<= 32;
    end |= ls;
    ls = in_code3;
    ls <<= 16;
    end |= ls;
    end |= in_code4;
    end ^= test_code;

    ls2 = in_code5;
    ls2 <<= 16;
    end2 = ls2;

    end2 |= in_code6;

    end2 ^= test_code2;
    //2556 595f f=15


    unsigned gMoney;
    char gluck;
    gMoney = (in_code5 & 0xF000) >> 12;
    gMoney *= gMoney;
    gMoney *= 10000;

    gluck = (in_code5 & 0x0F00) >> 8;

    char weaponlv; //�����Ľ�
    char weaponev; //������ǿ��

    char armylv,armyev;//װ���Ľ� �� ǿ��
    char necklv,neckev;//���εĽ� �� ǿ��

    weaponlv = (in_code5 & 0x00F0) >> 4;
    weaponev = (in_code5 & 0xF);

    armylv = (in_code6 & 0xF000) >> 12;
    armyev = (in_code6 & 0x0F00) >> 8;

    necklv = (in_code6 & 0x00F0) >> 4;
    neckev = (in_code6 & 0xF);


    std::cout << "���Լ����Ӳ����Ϊ:" << end << std::endl;
    std::cout << "���Լ����Ӳ����Ϊ(ǰ32λ):" << end2 << std::endl;
    std::cout << "�������" << gMoney << "�Ľ�����!" << std::endl;
    std::cout << "��������ֵΪ" << (short) gluck << "!" << std::endl;
    std::cout << "�������ǿ��Ϊ" << (short) weaponev << "��Ϊ:" << (short) weaponlv << "������" << "!" << std::endl;
    std::cout << "�������ǿ��Ϊ" << (short) armyev << "��Ϊ:" << (short) armylv << "��װ��" << "!" << std::endl;
    std::cout << "�������ǿ��Ϊ" << (short) neckev << "��Ϊ:" << (short) necklv << "������" << "!" << std::endl;

    system("pause");
}

