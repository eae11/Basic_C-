#include <iostream>
class T {
 public:
//  static int count;
  inline static int count{};//����inline�ؼ��ֿ��������˵���ж��徲̬��Ա����
  inline static const int count2{};
  /*
  ���ǿ�������static�ؼ�������һ����ľ�̬��Ա����,��ľ�̬��Ա�����������ص�:
(1)������û�д������ʵ��,�����Է�����ľ�̬��Ա����
(2)��ľ�̬��Ա�������ܷ��ʷǾ�̬�ĳ�Ա����
(3)��ľ�̬��Ա����������const
(4)��ľ�̬��Ա��������ʹ��thisָ��

   */
  static void Test(){

  }

  T() {
    count++;
  }
  ~T() {
    count--;
  }
};
//int T::count = 5;
void test() {
  T t1, t2, t3;
}
int main() {
  T::Test();
  T t1, t2, t3, t4;
  T t5;
  //T������ʵ�� ��̬�����ǹ����
  test();
  std::cout << T::count << std::endl;

}
