#include <iostream>
/*
������ͨ������������˵malloc��newûʲô����,���Ƕ�������˵,malloc�����Ƿ�����,��new���˷����ڴ����⻹����ù��캯��!
������ͨ������������˵free��delete����ʲô����,���Ƕ�������˵,free�������ͷ��ڴ�ռ�,��delete�����ͷ��ڴ�ռ�,������������������
������ͨ������������˵delete��delete[]û��ʲô����,���Ƕ�������˵,delete�������ͷ��ڴ�ռ�,�ҵ��õ�һ��Ԫ�ص���������,
��delete�����ͷ��ڴ�ռ�,�������ÿһ��Ԫ�ص���������
 */
class T {
  int m_count{};
  inline static int count{};
 public:
  T() {
    std::cout << "��" << ++count << "��T������" << std::endl;
    m_count = count;
  }
  ~T() {
    std::cout << "��" << m_count << "����������������" << std::endl;
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
