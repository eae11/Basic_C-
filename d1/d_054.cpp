#include <iostream>
#include <string>

using std::string;

int main() {
    /*char str[0x10] = "123";
    char strB[0x10] = "456";
    char strC[0x20];
    memcpy(strC,str,strlen(str));
    memcpy(strC + strlen(str),strB,strlen(strB)+1);//'0'Ҳ��������
    std::cout << strC << std::endl;*/

//    string str{"�����Ѳ�������Ƥ"};
//    std::cin >> str;
//    std::cout << str;

    //string ��������{���ַ�����,Ҫ��ȡ�ĳ���}
    string str1{"��dadadw��",3};//ע������ ��ȡ�����ֽ�
    std::cout << str1 << std::endl;
    //string��������{���ַ�����,��ʼλ��,Ҫ��ȡ�ĳ���}
    string str2{"0123456",2,3};//��2��ʼ��3λ
    std::cout << str2 << std::endl;

    /*string str3;
    std::cin >> str3;
    string str4{str3,0,6};
    std::cout << str4 << std::endl;*/
    //:string��������(Ҫ���Ƶĸ���, "�ַ�')
    string str5(6,'a');
    std::cout << str5 << std::endl;

    string str6,str7;
    str6 = "123";
    str7 = str6 + "" + "456";
    std::cout << str7 << std::endl;
    fflush(stdout);

    int age;
    std::cin >> age;
    string str8,ls;
    ls = "�û�������Ϊ";
    str8 = ls + std::to_string(age);
    std::cout << str8 << std::endl;
}
