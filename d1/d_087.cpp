#include <iostream>
//�ر�assert �ö�����#include <cassert>֮ǰ
//#define NDEBUG
//#include <cassert>
//#define assert(expression) ((void)0)

/*assert(bool���ʽ);
��������ڵ�bool���ʽΪfalse
������std::abort()����
��������ĶԻ���
assert����Ҫͷ�ļ�cassert

static_assert���ڱ���ʱ�������

static_assert(bool���ʽ"������Ϣ");
C++17���﷨
static_assert(bool���ʽ);
��assert��ͬ,static_assert��Ҫ�������ڱ���ʱ�����Ҫ������
��˼���bool���ʽ��,ֻ�����ڳ���

*/
int main() {
  std::cout << "������һ������" << std::endl;
  int c;
  std::cin >> c;
//  assert(c);
//  static_assert(c, "its 0");
//  static_assert(0, "its 0");
  static_assert(sizeof(int*) == 4, "it's not x86");
  std::cout << 1000 / c << std::endl;

}