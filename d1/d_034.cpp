#include <iostream>

int main() {
  int a[]{1,2,3,4,5,6,7};
  std::cout << sizeof(a) / sizeof(a[1]) << std::endl;
  int studentId[100]{};
  int indexId{};
  while (indexId < 100) {
    std::cout << "输入学号(输入0查看已登记的学生信息)";
    std::cin >> studentId[indexId];
    if (studentId[indexId] == 0) {
      system("cls");
      for (int i = 0; i < indexId; i++) {
        std::cout << i << "号 学生学号" << studentId[i] << std::endl;
      }
    } else indexId++;
  }
}
