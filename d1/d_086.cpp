#include <iostream>
/*
 *
编译器支持ISO C99和ISO C++11指定的预定义标识符
 标准预定义宏
__func__ 函数名称
__DATE__ 源文件的编译日期
__TIME__ 当前转换单元的转换时间
__FILE__ 源文件的名称
__LINE__ 当前的行号
__cplusplus 当翻译单元为C++时__cplusplus定义为一个整数文本,否则为未定义
MSVC的预定义宏
_CHAR_UNSIGNED 如果char类型为无符号,该宏定义为1否则为未定义
__COUNTER__ 从0开始,每次使用都会递增1
_DEBUG 如果设置了/lDd /mDd /mTd该宏定义为1否则为未定义
__FUNCTION__ 函数名称不含修饰名
__FUNCDNAME__ 函数名称包含修饰名
__FUNCSIG__ 包含了函数签名的函数名
_WIN32 32和64位下定义为1否则为未定义
_WIN64 64位下定义为1否则未定义
__TIMESTAMP__ 最后一次源代码修改的时间和日期

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
