#include <iostream>
#include <locale>

int main() {
  setlocale(LC_ALL,"chs");
  char a = 'a';
  wchar_t b = L'b';//vs2019下2个字节  utf_16 某些编译器4字节
  wchar_t p{L'我'};
  char16_t c = u'c';//utf_16   为了跨平台规定死了这两个   cout 和wcout都没实现支持
  char32_t d{U'd'};//utf_32   cout 和wcout都没实现支持
//    char8_t c;//utf8   最新标准  C17用不了
  std::cout << a << std::endl;
  std::cout << b << std::endl;//cout没有实现对宽字节编码的支持
  std::wcout << b << std::endl;//wcout
  std::cout << sizeof(b) << std::endl;
  std::wcout << p << std::endl;

  std::cout << c << std::endl;
  std::cout << d << std::endl;

  std::cout << "line1" << (char) 10; //\n 10   \r 13  空格32  ' 39 " 34  \92  a 97 A 65   0 48
  std::cout << "line2"<<std::endl;

  std::cout << "weqe\b\a";//\b 退格 \a警报声

  return 0;
}
