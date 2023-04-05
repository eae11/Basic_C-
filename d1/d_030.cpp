#include <iostream>
#include <conio.h>
#include <iomanip>

int main() {

  int lv = _getch();
  if (lv == 'l' || lv == 'L') {
    for (int i = 1; i <= 100; ++i) {
      std::cout << std::setfill(' ') << "\n等级" << std::setw(3) << i;
      std::cout << "           所需要的经验为:" << i * i * 100;
    }
  }

}
