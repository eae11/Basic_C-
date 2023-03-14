#include <iostream>

int main() {
//    std::shared_ptr<int> a{5};
    std::shared_ptr<int> a{std::make_shared<int>(5)};
    std::shared_ptr<int> b{a};
    std::shared_ptr<int> c{b};
    std::cout << *a << std::endl;
    std::cout << a << "  " << b << std::endl;
    /*std::make_shared��֧������*/
//    std::shared_ptr<int[]> d{std::make_shared<int[]>(5)};
    std::shared_ptr<int[]> d{new int[5]{1,2,3,4,5}};

/*�����ж��std::shared ptrָ��ͬһ��ַ,ͬһ��ַ��ֻ�е����һ��std::shared_ptr�ͷŵ�ʱ��,�Ż��ͷ�����ռ�õ��ڴ�ռ�,
std::shared_ptr���¼��ǰ��ַ�ж��ٸ�����ָ�����*/

    long count = a.use_count();//�᷵�ص�ǰָ�빲�ж��ٸ��������
    std::cout << count << std::endl;

    bool flag = a.unique();//�жϵ�ǰָ���Ƿ�ֻ�б�һ������������
    std::cout << flag << std::endl;
/*reset()�Ὣ��ǰ����ָ������Ϊnullptr,ͬʱ�����ǰ����ָ�������һ��ӵ�и�ָ��Ķ���,��ô�����ͷ��ڴ�*/
    a.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;
    b.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;
    c.reset();
    std::cout << a << "  " << b << "  " << c << std::endl;

}
