// class7.1.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

int main()
{
    unsigned int sId, sPr;
    std::cout << "ͬѧ,����������ѧ��:";
    std::cin >> sId;

    switch (sId)
    {

        case 15692:
            sPr = 500;
            break;
        case 65421:
            sPr = 450;
            break;
        case 98741:
            sPr = 250;
            break;
        case 2531:
            sPr = 150;
            break;
        case 666:
            [[fallthrough]];//C++17������ �൱��ʲô����д
        case 321:
            sPr = sId * 2; //sPr=sId<<1;
            break;
        default:
            sPr = 0;
            std::cout << "�Բ���,ͬѧ,�����λ��δ�н�,���´�������!\n";
            break;
    }

    if(sPr)std::cout << "ͬѧ,��ϲ��,������˽�ѧ�� " << sPr << " ����";
}
