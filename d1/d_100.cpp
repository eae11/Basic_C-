#include <iostream>
/*
对于普通的数据类型来说malloc和new没什么区别,但是对于类来说,malloc仅仅是分配内,而new除了分配内存以外还会调用构造函数!
对于普通的数据类型来说free和delete设有什么区别,但是对于类来说,free仅仅是释放内存空间,而delete不仅释放内存空间,还会调用类的析构函数
对于普通的数据类型来说delete和delete[]没有什么区别,但是对于类来说,delete仅仅是释放内存空间,且调用第一个元素的析构函数,
而delete不仅释放内存空间,还会调用每一个元素的析构函数
 */
class T {
  int m_count{};
  inline static int count{};
 public:
  T() {
    std::cout << "第" << ++count << "个T被构造" << std::endl;
    m_count = count;
  }
  ~T() {
    std::cout << "第" << m_count << "个析构函数被调用" << std::endl;
  }
  int test = 2;
};
int main() {
  T* t1 = (T*) malloc(10 * sizeof(T));
  std::cout << t1[0].test << std::endl;

  int* pint = (int*) malloc(10 * 4);
  pint[2] = 250;
  std::cout << pint[2] << std::endl;
  T* t2 = new T[100];

  free(t1);
  free(pint);
//  free(t2);
  delete[] t2;
}
