#include <iostream>
#include <vector>
int main() {

    std::vector<int> studentId;
//    std::vector<int> studentId{1,2,3};
//    std::vector<int> studentId(5);//5��Ԫ��
//    std::vector<int> studentId(5,100);//5��Ԫ��,��ֵ����100
    studentId.assign(5,100);//��studentId���³�ʼ��δӵ��5��Ԫ��ÿ��Ԫ��Ϊ100�� verctor
//    studentId.clear();//���
//    studentId.empty();//�ж��Ƿ�Ϊ��
//    std::cout << studentId[2] << std::endl;
//    std::cout << studentId.at(2) << std::endl;
    int userId;
    do {

        std::cout << "������ѧ��";
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
