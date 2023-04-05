#include <iostream>
#include <vector>
int main() {

  std::vector<int> studentId;
//    std::vector<int> studentId{1,2,3};
//    std::vector<int> studentId(5);//5个元素
//    std::vector<int> studentId(5,100);//5个元素,初值都是100
  studentId.assign(5,100);//将studentId重新初始化未拥有5个元素每个元素为100的 verctor
//    studentId.clear();//清空
//    studentId.empty();//判断是否为空
//    std::cout << studentId[2] << std::endl;
//    std::cout << studentId.at(2) << std::endl;
  int userId;
  do {

    std::cout << "请输入学号";
    std::cin >> userId;
    if (!userId) {
      break;
    }
    studentId.push_back(userId);
  } while (true);
  for (auto &item : studentId) {
    std::cout << item << std::endl;
  }


}
