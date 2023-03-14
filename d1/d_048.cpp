#include <iostream>

int main() {
    int *b{};
    std::unique_ptr<int> b_ptr{new int{5}};
    std::cout << *b_ptr << std::endl;
    int *a = new int[5];

//    std::unique_ptr<int[]> intPtr{new int[5]{5,4,3,2,1}};
    std::unique_ptr<int[]> intPtr{std::make_unique<int[]>(5)};//c++14新语法  这里5代表个数
    std::unique_ptr<int> intPtr2{std::make_unique<int>(5)};//这里5代表初始值
//    std::unique_ptr<int[]> intPtrA{};
//    intPtrA = intPtr;//智能指针具有唯一性不能存放相同的内存地址
    std::cout << intPtr[1] << std::endl;
    std::cout << intPtr[0] << std::endl;

//    intPtr.reset();//释放内存空间 指针并且指向0
    a = intPtr.get();//返回指针(也就是说想从智能指针换到普通指针)

    a = intPtr.release();//内存不释放只是把指针指向0
    std::cout << intPtr << std::endl;
    std::cout << a << std::endl;

    //智能指针因为具备唯一性,因此不能被复制,但是可以转移
    std::unique_ptr<int> ptr1{new int{}};
    std::unique_ptr<int> ptr2{};
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;
    ptr2 = std::move(ptr1);//ptr1指向0,ptr2指向原来ptr1指向的地方
    std::cout << ptr1 << std::endl;
    std::cout << ptr2 << std::endl;

}
