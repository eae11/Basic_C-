// class16.7.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>
#include <iomanip>

void Hack()
{
    unsigned long long x = 0;
    for (int i = 0; true; i++)
    {
        if (i % 100000000 == 0)
        {
            system("cls");
            std::cout << "\n������������������������������������������������������������\n";
            std::cout << "\n ���ϵͳ�Ѿ�����������! hacked by ���õ�����:[ID:000001 ]\n";
            std::cout << "\n              ��Ⱥ:868267304 ���\n";
            std::cout << "\n\\>���ڴ���Ӳ������....�Ѿ�����" << x++ << "���ļ�......\n\n";

            std::cout << std::setfill('>')<< std::setw(x % 60) << "\n";

            std::cout << "\n\\>����ͷ������!<==============\n\n";

            std::cout << std::setfill('#') << std::setw(x % 60) << "\n";

            std::cout << "\n\\>���ݴ�����ɺ������Իٳ���!CPU�����¶�������200���϶�\n";

            std::cout << "\n������������������������������������������������������������\n";
        }
    }
}

int GetAge()
{
    int rt;
    std::cout << "������ѧԱ������:";
    std::cin >> rt;
    return rt;
}

int count()
{
    int i{};
    int total{};
    int age[10]{};
    do
    {
        age[i] = GetAge();
        total += age[i];
        //��AGE[I]���浽���ݿ���
    } while (age[i++]);
    return total;
}

int main()
{
    std::cout << "======= ¿����ѧԺ ѧԱ������ͳ�Ƽ���ϵͳ =====\n";
    std::cout << "\n                API:"<<Hack<<std::endl;
    std::cout << "\n[˵��:�������10��ѧԱ����Ϣ,������0ʱ�����������]\n\n";
    std::cout << "\n¿����ѧԺ��ѧԱ������Ϊ:" << count();
}

