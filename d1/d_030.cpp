#include <iostream>
#include <conio.h>
#include <iomanip>

int main() {

    int lv = _getch();
    if (lv == 'l' || lv == 'L') {
        for (int i = 1; i <= 100; ++i) {
            std::cout << std::setfill(' ') << "\n�ȼ�" << std::setw(3) << i;
            std::cout << "           ����Ҫ�ľ���Ϊ:" << i * i * 100;
        }
    }

}
