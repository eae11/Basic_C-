#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL,"chs");
    char a = 'a';
    wchar_t b = L'b';//vs2019��2���ֽ�  utf_16 ĳЩ������4�ֽ�
    wchar_t p{L'��'};
    char16_t c = u'c';//utf_16   Ϊ�˿�ƽ̨�涨����������   cout ��wcout��ûʵ��֧��
    char32_t d{U'd'};//utf_32   cout ��wcout��ûʵ��֧��
//    char8_t c;//utf8   ���±�׼  C17�ò���
    std::cout << a << std::endl;
    std::cout << b << std::endl;//coutû��ʵ�ֶԿ��ֽڱ����֧��
    std::wcout << b << std::endl;//wcout
    std::cout << sizeof(b) << std::endl;
    std::wcout << p << std::endl;

    std::cout << c << std::endl;
    std::cout << d << std::endl;

    std::cout << "line1" << (char) 10; //\n 10   \r 13  �ո�32  ' 39 " 34  \92  a 97 A 65   0 48
    std::cout << "line2"<<std::endl;

    std::cout << "weqe\b\a";//\b �˸� \a������

    return 0;
}
