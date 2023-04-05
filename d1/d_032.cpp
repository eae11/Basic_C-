#include <iostream>

int main() {


  char inKey{};
  do {
    int num;
    std::cout << "请输入一个数";
    std::cin >> num;
    bool flag;
    flag = (num % 2 != 0);
    for (int i = 3; (flag) && (i <= sqrt(num)); i+=2) {
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
    std::cout << "按y继续其他任意键退出";
    std::cin >> inKey;
  } while (inKey == 'y' || inKey == 'Y');

}
