#include <iostream>
/*
 *
������֧��ISO C99��ISO C++11ָ����Ԥ�����ʶ��
 ��׼Ԥ�����
__func__ ��������
__DATE__ Դ�ļ��ı�������
__TIME__ ��ǰת����Ԫ��ת��ʱ��
__FILE__ Դ�ļ�������
__LINE__ ��ǰ���к�
__cplusplus �����뵥ԪΪC++ʱ__cplusplus����Ϊһ�������ı�,����Ϊδ����
MSVC��Ԥ�����
_CHAR_UNSIGNED ���char����Ϊ�޷���,�ú궨��Ϊ1����Ϊδ����
__COUNTER__ ��0��ʼ,ÿ��ʹ�ö������1
_DEBUG ���������/lDd /mDd /mTd�ú궨��Ϊ1����Ϊδ����
__FUNCTION__ �������Ʋ���������
__FUNCDNAME__ �������ư���������
__FUNCSIG__ �����˺���ǩ���ĺ�����
_WIN32 32��64λ�¶���Ϊ1����Ϊδ����
_WIN64 64λ�¶���Ϊ1����δ����
__TIMESTAMP__ ���һ��Դ�����޸ĵ�ʱ�������

 *
 * */
int ave(int a, int b) {
  std::cout << __func__ << std::endl;//ave
  std::cout << __FUNCTION__ << std::endl;//ave
  std::cout << __FUNCDNAME__ << std::endl;//?ave@@YAHHH@Z
  std::cout << __FUNCSIG__ << std::endl;//int __cdecl ave(int,int)
  return 0;
}
int main() {
  ave(1, 2);
  std::cout << __func__ << std::endl;
  std::cout << __DATE__ << std::endl;
  std::cout << __TIME__ << std::endl;
  std::cout << __LINE__ << std::endl;
  std::cout << __FILE__ << std::endl;
  std::cout << __cplusplus << std::endl;
  std::cout << __TIMESTAMP__ << std::endl;

#ifdef _CHAR_UNSIGNED
  std::cout <<"char unsigned"  << std::endl;
#else

#endif
  std::cout << __COUNTER__ << std::endl;
  std::cout << __COUNTER__ << std::endl;

#ifdef _DEBUG
  std::cout << "debug mode" << std::endl;
#else

#endif
#ifdef _WIN64
  std::cout << "WIN64" << std::endl;

#endif
}
