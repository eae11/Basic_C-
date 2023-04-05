// class11.3.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main() {

  unsigned ua{999901};

  int *ptr{};
  long long *uptr{(long long *) &ua};
//    *uptr = 0;
  ptr = (int *) &ua; //unsigned


  char *ctr{};

  *ptr = -1; //0xFF FF FF FF

  ctr = (char *) ptr; //

  *ctr = 'A'; //41 FF FF FF // 0xFFFFFF41

//    *(ctr+4)=0;
//    *(ctr+5)=0;
//    *(ctr+6)=0;
//    *(ctr+7)=0;


  //00 00 00 00 未知  (&ua)+4
  //FF FF FF FF ua    &ua


  std::cout << ptr << std::endl;
  std::cout << ua << std::endl;
  std::cout << ctr << std::endl;
  std::cout << *ctr << std::endl;
  std::cout << *ptr << std::endl;
  std::cout << *uptr << std::endl;
}

