#include <iostream>
#include <array>

int main() {
    int studentIdA[2]{999,999};
    int studentIdB[2]{999,999};
    std::array<int,2> studentId{10001,10002};//2个元素
    std::array<int,2> studentIdD{10001,10002};
//    std::cout << studentIdA[100] << std::endl;//能访问到100不安全

//    std::cout << studentId.at(100) << std::endl;//抛异常

    std::cout << studentId.size() << std::endl;//2
    studentId.fill(999);
    studentIdD.fill(999);
    for (auto &item : studentId) {
        std::cout << item << std::endl;
    }

    std::cout <<( studentIdA==studentIdB) << std::endl;//false
    std::cout << (studentId == studentIdD) << std::endl;//true

}
