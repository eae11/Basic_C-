#include <iostream>
int main() {
    int studentId[]{65,66,67,68,69};
    for (int i = 0; i < sizeof(studentId) / sizeof(studentId[0]); i++) {
        std::cout << studentId[i] << std::endl;
    }

    for (int item : studentId) {
        std::cout << item << std::endl;
    }
    for (auto item : studentId) {
    std::cout << item << std::endl;
    }

}
