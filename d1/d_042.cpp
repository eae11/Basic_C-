#include <iostream>

int main() {
  unsigned x;
  std::cout << "请输入要分配的内存大小:";
  std::cin >> x;
  int *p{},*pm{},*pold;

//    p=new int;//分配一个int  C语言free释放 C++ delete p;
  p = new int[x];//分配x个int  C++ delete[] p;
  *p = 500;
  p[0] = 500;

  pm = (int *) malloc(x * sizeof(int));//void*

  //p = (int*)calloc(x, sizeof(int));
  pold = p;


  std::cout << pm[0] << std::endl;
  std::cout << p[0] << std::endl;

  if (p == nullptr) {
    std::cout << "内存分配失败!";
  } else {
    p[0] = 952;
    p[1] = 253;
    p[2] = p[0] * p[1];
    std::cout << p[0] << " " << p[1] << " " << p[2];
  }

  std::cout << "请输入要重新分配的内存大小:";
  std::cin >> x;
  p = (int *) realloc(p,x);
  std::cout << p << "========" << pold << std::endl;
  std::cout << p[0] << " " << p[1] << " " << p[2];

  delete[] p;

  free(pm);
  pm = 0;
  std::cout << p << "========" << pm << std::endl;


}

