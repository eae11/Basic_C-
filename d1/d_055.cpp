#include <iostream>

using std::string;
#define softName "end"
#define softVersion "2.0"

int main() {
    string str;
    str = string{"!23"} + "456";

    str = str + "nba";
    string str2;
    str2 = softName softVersion;//str2 ="end""2.0"
    //    std::cout << str2 << std::endl;

    /* string str3{"123"};
     char a;
     std::cin >> a;
     str3 = str3 + a;
     std::cout << str3 << std::endl;*/

    string str4{"123"};
    //    str4.append("123456",1);
    str4.append("123456",1,3);
    str4.append("456").append("789");
    std::cout << str4 << std::endl;

    string str5{"123456"};
    //    str5 = str5.substr(1);//23456
    str5 = str5.substr(1,3);//��1��ʼ��ȡ3��
    std::cout << str5 << std::endl;

    string str6{"0123456789"};
    std::cout << str6[6] << std::endl;

    /*char *str7 = (char *) "123456";
    char *str8 = (char *) "123456";

    std::cout << (str7 == str8) << std::endl;//ԭ���жϲ���*/

    /* string str9{"123456"};
     string str10{};
     std::cin>>str10;
     std::cout << (str9==str10) << std::endl;//����123456 ���*/

    string str11{"abcd"};
    std::cout << str11.compare("abcd") << std::endl;//0
    std::cout << str11.compare("bcde") << std::endl;//���ظ���
    std::cout << str11.compare("ABCD") << std::endl;//��������

    string str12{"abdefff"};
    std::cout << str12.compare(4,3,"fff") << std::endl;

    std::cout << str12.compare(4,3,"adadfff",4,3) << std::endl;

    string str13 = "studengId:560001username:56203;asdasdsadasdastudengId:560002";
    string studentId;
    //find(Ҫ����������,��ʼ������λ��); δ�ҵ�����-1
    //find(Ҫ����������,��ʼ������λ��,Ҫ���������ĳ���);����2�Ƕ��ڵ��ô˺������ַ���,����3�Ƕ��ڲ���1
//    int posit = str13.find("studengId:xxxx",0,10);//�ӵ�0����ʼ��,studengId:xxxx ��ǰʮ���ַ���
    //������
    int posit = str13.rfind("studengId:xxxx",str13.length() - 1,10);//�����ʼ������ ��ǰʮ���ַ���
    studentId = str13.substr(posit + strlen("studengId:"),6);
    std::cout << studentId << std::endl;


    string id{"id=;"};

    id.insert(3,"killertestid",6);
    std::cout << id << std::endl;

    id.insert(3,"killertestid",6,6);
    std::cout << id << std::endl;

    id.insert(3,6,'*');
    std::cout << id << std::endl;

    id.insert(3,"testId");
    std::cout << id << std::endl;

    string strId{"id=user;"};
//    strId.replace(3,4,"zhangsan!pkaq",9,4);
//    strId.replace(3,4,"zhangsan!");
//    strId.replace(3,4,6,'*');

    strId.erase(3,3);//�ַ���ɾ��
//    strId.erase(3);
//    strId.clear();//ȫɾ��
    std::cout << strId << std::endl;

}
