#include <iostream>

int main() {
//    std::shared_ptr<int> a{5};
    std::shared_ptr<int> a{std::make_shared<int>(5)};
    std::shared_ptr<int> b{a};
    std::shared_ptr<int> c{b};
    std::cout << *a << std::endl;
    std::cout << a << "  " << b << std::endl;
    /*std::make_shared不支持数组*/
//    std::shared_ptr<int[]> d{std::make_shared<int[]>(5)};
    std::shared_ptr<int[]> d{new int[5]{1,2,3,4,5}};

/*可以有多个std::shared ptr指向同一地址,同一地址下只有当最后一个std::shared_ptr释放的时候,才会释放其所占用的内存空间,
std::shared_ptr会记录当前地址有多少个智能指针调用*/

    long count = a.use_count();//会返回当前指针共有多少个对象调用
    std::cout << count << std::endl;

    bool flag = a.unique();//判断当前指针是否只有被一个对象所调用
    std::cout << flag << std::endl;
/*reset()会将当前共享指针设置为nullptr,同时如果当前智能指针是最后一个拥有该指针的对象,那么将会释放内存*/
    a.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;
    b.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;
    c.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;

}
