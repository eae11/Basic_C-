#include <iostream>

int Add(int a = 100,int b = 200);

//int Add(int a=100,int b)//����
//int Add(int a,int b=100,int c=250)//��ȷ
int main(int count,char* arc[])
{
    std::cout << "һ����" << count << "������\n";
    for (int i = 0; arc[i]; i++)std::cout <<"��ַ:" <<(int)arc[i]<< "����[" << i << "]=[" << arc[i] << "]\n";
}

