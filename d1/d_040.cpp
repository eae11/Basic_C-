// class11.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main() {
  float c{500.0f};
  int a{5000};
  int *pa{&a};


  (*pa)++;

  std::cout << "内存地址:" << pa << "\na=" << *pa<<std::endl;
  int studentId[2][2]
      {
          {10001,10002},
          {20001,20002}
      };

  int *ptrStudentId[2][2];

  for (int x = 0; x < 2; x++) {
    for (int y = 0; y < 2; y++) {
      ptrStudentId[x][y] = &studentId[x][y];

      std::cout << "内存地址:" << ptrStudentId[x][y] << "值" << *ptrStudentId[x][y] << "\n";
    }
  }
}

