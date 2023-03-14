// class9.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <cmath>

int main() {
    char inKey{'y'};
    while (inKey == 'y' || inKey == 'Y') {
        int num;
        std::cout << "请输入一个数" << std::endl;
        std::cin >> num;
        bool flag;
        flag = (num % 2 != 0);
        for (int i = 3; (flag) && (i <= sqrt(num)); i += 2) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        if (flag) {
            std::cout << "是质数";
        } else {
            std::cout << "不是质数";
        }
        std::cout << "按y继续判断,其他任意键退出" << std::endl;
        std::cin >> inKey;
    }
}
