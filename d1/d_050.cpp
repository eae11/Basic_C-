#include <iostream>

int main() {
    char str1[] = "hello";
    std::cout << str1 << std::endl;
    char str2[] = {'h','e','l','l','o','\0'};
    std::cout << str2 << std::endl;
//    char *str3 = (char *)"hello";
    const char *str3 = "hello";
    std::cout << str3 << std::endl;
    char *str4 = new char[]{"hello"};
    std::cout << str4 << std::endl;

    wchar_t str5[] = {L"helloÕÅÈý"};
    for (int x = 0; str5[x]; x++) {
        std::cout << std::hex << (short) str5[x] << std::endl;
    }
        setlocale(LC_ALL,"chs");
    std::wcout << str5 << std::endl;
}
