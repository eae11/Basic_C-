#include <iostream>

//int ave(int a,int b) {
//    std::cout << "����int����" << std::endl;
//    return (a + b) / 2;
//}

int ave(int &a,int &b) {//���ܺ�int ave(int a,int b)����
    std::cout << "����int����" << std::endl;
    return (a + b) / 2;
}


//int ave(const int a,const int b) {//���ܺ�int ave(int a,int b)����
//    std::cout << "����int����" << std::endl;
//    return (a + b) / 2;
//}

int ave(const int &a,const int &b) {//���Ժ�int ave(int &a,int &b) ��������
    std::cout << "����int����" << std::endl;
    return (a + b) / 2;
}

int ave(int a,int b,int c) {
    std::cout << "����int����" << std::endl;
    return (a + b + c) / 3;
}

float ave(float a,float b) {
    std::cout << "����float����" << std::endl;
    return (a + b) / 2;
}

float ave(float a,float b,float c) {
    std::cout << "����float����" << std::endl;
    return (a + b + c) / 3;
}

int main() {
    /*char a = 100;
    char b = 100;
    std::cout << ave((int) a,(int) b) << std::endl;//a��bǿ��Ϊintֻ��һ����ʱ������û���Լ���������˻��ǻ���float*/

   /* const*/ int a = 100;
    /*const */int b = 100;
    std::cout << ave(a,b) << std::endl;

    std::cout << ave(2,3,4) << std::endl;
    std::cout << ave(2.0f,3.0f) << std::endl;
    std::cout << ave(2.0f,3.0f,4.0) << std::endl;

}
