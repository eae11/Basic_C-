// class11.1.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

int main() {
    float c{500.0f};
    int a{5000};
    int *pa{&a};


    (*pa)++;

    std::cout << "�ڴ��ַ:" << pa << "\na=" << *pa<<std::endl;
    int studentId[2][2]
            {
                    {10001,10002},
                    {20001,20002}
            };

    int *ptrStudentId[2][2];

    for (int x = 0; x < 2; x++) {
        for (int y = 0; y < 2; y++) {
            ptrStudentId[x][y] = &studentId[x][y];

            std::cout << "�ڴ��ַ:" << ptrStudentId[x][y] << "ֵ" << *ptrStudentId[x][y] << "\n";
        }
    }
}

