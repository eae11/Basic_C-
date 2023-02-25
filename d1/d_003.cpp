#include <iostream>

int main() {

    int year{2018};
    int month{2018};
    int day{2018};
//    int age{7.5};
    int age = 7.5;
    std::cout << "今天是" << year << "年" << month << "月" << day << "日" << std::endl;
    printf("%d\n", age);
    unsigned short salary;
    std::cout << "请输入你的工资" << std::endl;
    std::cin >> salary;

    std::cout << salary << std::endl;

}
