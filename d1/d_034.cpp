#include <iostream>

int main() {
    int a[]{1,2,3,4,5,6,7};
    std::cout << sizeof(a) / sizeof(a[1]) << std::endl;
    int studentId[100]{};
    int indexId{};
    while (indexId < 100) {
        std::cout << "����ѧ��(����0�鿴�ѵǼǵ�ѧ����Ϣ)";
        std::cin >> studentId[indexId];
        if (studentId[indexId] == 0) {
            system("cls");
            for (int i = 0; i < indexId; i++) {
                std::cout << i << "�� ѧ��ѧ��" << studentId[i] << std::endl;
            }
        } else indexId++;
    }
}
