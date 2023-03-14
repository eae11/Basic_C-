#include <iostream>

int Add(int a = 100,int b = 200);

//int Add(int a=100,int b)//错误
//int Add(int a,int b=100,int c=250)//正确
int main(int count,char* arc[])
{
    std::cout << "一共有" << count << "个参数\n";
    for (int i = 0; arc[i]; i++)std::cout <<"地址:" <<(int)arc[i]<< "参数[" << i << "]=[" << arc[i] << "]\n";
}

