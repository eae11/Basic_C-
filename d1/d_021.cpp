#include <iostream>

//#include <cctype>
int main() {

    std::cout << "��д��ĸ" << isupper('A') << std::endl;//�Ƿ��Ǵ�д��ĸ
    std::cout << "Сд��ĸ" << islower('a') << std::endl;//Сд��ĸ
    std::cout << "��ĸ" << isalpha('A') << std::endl;//��ĸ
    std::cout << "����" << isdigit('5') << std::endl;//����
    std::cout << "��ĸ������" << isalnum('A') << std::endl;//��ĸ������
    std::cout << "�հ�" << isspace('\f') << std::endl;//�Ƿ� �ո� \t \n \r  \f(��ҳ��) \v(��ֱ�Ʊ��)
    std::cout << "�ո�" << isblank('\n') << std::endl;//�Ƿ� �ո� \t
    std::cout << "������" << ispunct('.') << std::endl;//������
    std::cout << "�ܷ��ӡ" << isprint('a') << std::endl;//�ܷ��ӡ
    std::cout << "�Ƿ�����ַ�" << iscntrl('A') << std::endl;//�Ƿ�����ַ�
    std::cout << "�Ƿ�ͼ���ַ�" << isgraph('A') << std::endl;//�Ƿ�ͼ���ַ�
    std::cout << "ת��д" << toupper('A') << std::endl;//ת��д
    std::cout << "תСд" << tolower('A') << std::endl;//תСд

}
