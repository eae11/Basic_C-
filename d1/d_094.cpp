#include <iostream>
/*
�����л���һ������ĳ�Ա����,������������,������������������ܽ���ʱ,���Զ�����,
 һ��������ɨβ����,�����ͷ��ڴ�,�رվ���ȵ�,���һ����û�ж�����������,
 ��ô���������Զ����һ���յ���������,��������ֻ����һ��;
 */
class Role {
 public:
  int* p;
  Role() {
    p = new int[100];
    std::cout << "�౻����" << std::endl;
  }
  ~Role() {
    delete[] p;
    std::cout << "�౻����" << std::endl;
  }
};

int main() {
  Role user;
  int a{1};
  while (a) {
    Role p;
    std::cin>>a;
  }
  std::cout << "end" << std::endl;
}
