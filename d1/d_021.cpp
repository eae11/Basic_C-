#include <iostream>

//#include <cctype>
int main() {

    std::cout << "大写字母" << isupper('A') << std::endl;//是否是大写字母
    std::cout << "小写字母" << islower('a') << std::endl;//小写字母
    std::cout << "字母" << isalpha('A') << std::endl;//字母
    std::cout << "数字" << isdigit('5') << std::endl;//数字
    std::cout << "字母或数字" << isalnum('A') << std::endl;//字母或数字
    std::cout << "空白" << isspace('\f') << std::endl;//是否 空格 \t \n \r  \f(换页符) \v(垂直制表符)
    std::cout << "空格" << isblank('\n') << std::endl;//是否 空格 \t
    std::cout << "标点符号" << ispunct('.') << std::endl;//标点符号
    std::cout << "能否打印" << isprint('a') << std::endl;//能否打印
    std::cout << "是否控制字符" << iscntrl('A') << std::endl;//是否控制字符
    std::cout << "是否图形字符" << isgraph('A') << std::endl;//是否图形字符
    std::cout << "转大写" << toupper('A') << std::endl;//转大写
    std::cout << "转小写" << tolower('A') << std::endl;//转小写

}
