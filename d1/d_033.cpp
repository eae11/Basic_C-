#include <iostream>

int main() {
    int MP = 1383,lsMP{MP};
    int damage{};
    int needMP{};
    do {
        damage += 100;
        MP -= needMP;
        needMP += 50;
        std::cout << "�˺�" << damage << "ʣ������" << MP << std::endl;
    } while (MP >= needMP);
    MP = lsMP;


}
