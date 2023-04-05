#include <iostream>


int main() {
  unsigned int x;
  unsigned int y;
  std::cout << "输入x" << std::endl;
  std::cin >> x;
  std::cout << "输入y" << std::endl;
  std::cin >> y;

  int a = x - y;
  unsigned b = a;

  unsigned int big;
  unsigned int small;

  std::cout << "大的数是" << big << std::endl;
  std::cout << "小的数是" << small << std::endl;


}
