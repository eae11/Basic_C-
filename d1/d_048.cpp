#include <iostream>

int main() {
    int *b{};
    std::unique_ptr<int> b_ptr{new int{5}};
    std::cout << *b_ptr << std::endl;
    int *a = new int[5];

//    std::unique_ptr<int[]> intPtr{new int[5]{5,4,3,2,1}};
    std::unique_ptr<int[]> intPtr{std::make_unique<int[]>(5)};//c++14���﷨  ����5�������
    std::unique_ptr<int> intPtr2{std::make_unique<int>(5)};//����5�����ʼֵ
//    std::unique_ptr<int[]> intPtrA{};
//    intPtrA = intPtr;//����ָ�����Ψһ�Բ��ܴ����ͬ���ڴ��ַ
    std::cout << intPtr[1] << std::endl;
    std::cout << intPtr[0] << std::endl;

//    intPtr.reset();//�ͷ��ڴ�ռ� ָ�벢��ָ��0
    a = intPtr.get();//����ָ��(Ҳ����˵�������ָ�뻻����ָͨ��)

    a = intPtr.release();//�ڴ治�ͷ�ֻ�ǰ�ָ��ָ��0
    std::cout << intPtr << std::endl;
    std::cout << a << std::endl;

    //����ָ����Ϊ�߱�Ψһ��,��˲��ܱ�����,���ǿ���ת��
    std::unique_ptr<int> ptr1{new int{}};
    std::unique_ptr<int> ptr2{};
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;
    ptr2 = std::move(ptr1);//ptr1ָ��0,ptr2ָ��ԭ��ptr1ָ��ĵط�
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;

}
