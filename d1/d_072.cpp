#include <iostream>

/*auto ave(int a,int b) {
    return a + b;
}*/

//int &bigger(int &a,int &b) {
//auto bigger(int &a,int &b) {
//    return a > b ? a : b;//auto���a����bת��Ϊint����
//}

/*auto bigger(int &a,int &b) -> int & {//ǿ�Ʒ���->���������
    return a > b ? a : b;
}*/

//c++11д��
/*auto bigger(int &a,int &b) -> decltype(a > b ? a : b) {
    return a > b ? a : b;
}*/

//c++14������ôд
decltype(auto) bigger(int &a,int &b) {
    return a > b ? a : b;
}

int ave(int a,int b) {
    std::cout << "decltype" << std::endl;
    return a + b;
}

int ave1(int a,int b) {
    std::cout << "auto" << std::endl;
    return a + b;
}

int main() {
    /*const int a{1500};
    auto b = a;//auto���constɾ����*/

    /*int c{2500};
    int &lb{c};

    auto d = lb;//����Ҳ�ᶪ��*/

//    auto e = ave(1,2);//���ݺ����ķ���ֵ��ȷ�����͵�ʱ��,������ִ��

    /*int a{200},b{300};
    bigger(a,b) = 500;//˭��ͷ���˭�����ò��Ҹ�ֵ500 ȥ�����ú������ʱ����,����д��
    std::cout << b << std::endl;*/

//    decltype(���ʽ)


/*
 * ���decltype�ڵı��ʽû�����κ�����,��ô�ó�����������ͬ���ʽ�ڵ���������,����decltype���Ա���const����������;
 */
//    const int c{100};
//    decltype(c) x = 500;
//    return 0;

    /*
     *���decltype�ڵı��ʽ������������ô�ó������������Ǹ����������Ƿ��й̶����ڴ��ַ(��ֵ)��������,
     * ����й̶����ڴ��ַ��ó�������Ϊ�����͵���������,���û�й̶����ڴ��ַ,��ó�������Ϊ�ý��������
     */
//    int a{100},b{50};
//    int *pa{&a};
//    decltype(a+b) x;//a+b��һ����ʱ����,����a,b�������Լ����ڴ��ַ,����Ϊint����
//    decltype(*pa) x = a;//*pa��int����,������*����,����a�й̶����ڴ��ַ,����Ϊint &����
//    decltype(*pa+1) x = a;


    /*
     *���decltype�ڵı��ʽ��һ������,��ô�ó������������Ǹ��ݺ����ķ���������ȷ����;
     * decltype�������ִ�б��ʽ������,���ave������δִ��
    */
    /*decltype(ave(100,200)) x;//�൱��int x
    auto e = ave1(1,2);//������ִ��*/

    /* int a = 10;
     int b = 1;
 //    decltype(a++) x;
     decltype(++a) x = b;*/


}