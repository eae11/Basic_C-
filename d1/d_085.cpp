#include <iostream>
#include <bitset>
#include "d_085_1.h"
namespace t {
int a = 100;
}
int a = 66;
namespace t {
int height{100};
}
/*���о����������ԵĶ���,ֻҪû�ж��������ռ�,��Ĭ�϶�����ȫ�������ռ���,
 * ȫ�������ռ��г�Ա�ķ��ʲ�����ʾ��ָ��,���ֲ����Ƹ�����ȫ������ʱ����Ҫ��ʽ��ָ��ȫ�������ռ�;*/

namespace hkd {
int b = 25;//����
void test() {
  std::cout << b << std::endl;
}
namespace hack {
void f1() {
  std::cout << "f1" << std::endl;
}
}
}
namespace h1 = hkd::hack;//�����ռ�ȡ����
/*int hkd::b{250};//����
void hkd::test() {
  std::cout << hkd::b << std::endl;
};
void hkd::hack::f1() {
  std::cout << "f1" << std::endl;
}*/
/*static void Thack(){ //���ڲ��Ƽ���static����δ������namespace
  std::cout << "thack" << std::endl;
}*/

namespace {
void Thack() {
  std::cout << "thack" << std::endl;
}
}
int main() {
  int a = 50;
  std::cout << t::a << std::endl;
  std::cout << a << std::endl;
  std::cout << ::a << std::endl;
  std::cout << hkd::b << std::endl;
  Thack();
  hkd::hack::f1();
  h1::f1();
}
