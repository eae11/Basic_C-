#include <iostream>

int main() {

    int x,y,z;
    int acount = 10000 / 500;
    int bcount = 10000 / 300;
    for (x = 0; x <= 20; x++) {
        for (y = 0; y <= bcount; y++) {
            int z = 100 - x - y;
            if ((z % 3 == 0) && (500 * x + 300 * y + 100 * z / 3 == 10000)) {
                std::cout << "�߼�:" << x << "�м�:" << y << "�ͼ�:" << z << std::endl;
            }
        }
    }
    for (int num = 0; num <= 3; num++) {
        std::cout << "�߼�:" << 4*num << "�м�:" << 25-7*num << "�ͼ�:" << 75+3*num << std::endl;
    }

}
