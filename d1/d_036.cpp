#include <iostream>

int main() {
    int studentId[3][5]{
            {101,2,3,4,5},
            {1,  2,3,4,5},
            {1,  2,3,4,4}
    };
    for (int i = 0; i < 3; ++i) {
        int count{};
        for (auto &item: studentId[i]) {
            count++;
            std::cout << "第" << i + 1 << "班的第" <<count<<"个同学的学号为"<< item << std::endl;
        }
    }

}
