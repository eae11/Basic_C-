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
            std::cout << "��" << i + 1 << "��ĵ�" <<count<<"��ͬѧ��ѧ��Ϊ"<< item << std::endl;
        }
    }

}
