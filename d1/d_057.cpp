#include <iostream>
#include <string>
#include <sstream>
using std::string;

int main() {
    string str{"12345"};
    std::cout << str[0] << std::endl;

    std::cout << (int) &str << " " << (int) &str[0] << " " << (int) &str[1] << std::endl;
    str = str + "65ssssssssssss";
    std::cout << (int) &str << " " << (int) &str[0] << " " << (int) &str[1] << std::endl;

    const char *baseStr = str.c_str();
//    char* dataStr = str.data();//返回的是非常量指针可以修改里面内容
    std::cout << (int) &str << " " << (int) &str[0] << " " << (int) &str[1] << " " << (int) baseStr << std::endl;
//    dataStr[0] = '5';
    std::cout << (int) str[str.length()]<<std::endl;//c++11标准后c++字符串也以'\0'结尾


    int x = std::stoi("15963");
    std::cout << x + 1;

    std::stringstream strS;
    strS << "你好" << "123["<<std::hex<<1250<<"]";

    string a = strS.str();
    std::cout << a;

}
