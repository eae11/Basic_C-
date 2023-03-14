#include <iostream>
#define X //代码中的X会被删除
#define _in_
#define _out_
#define SUM(X, Y) X+Y*3
#define RELEASE(x) delete[] x;x=nullptr;
#define SHOW(X) std::cout<<#X
#define SHOW2(X, Y) void X##Y(){std::cout<<#X;}

SHOW2(test, 22)
int ave(_in_ int a, _out_ int& b) {//仅做一个标识
  return a + b;
}

int main() {

  int X a{2500};
  int* a1 = new int[50];

  std::cout << SUM(100, 200) << std::endl;
/*  delete[] a1;
  a1= nullptr;*/
  RELEASE(a1)
  SHOW(aaa"dadadadadd");
test22();
}
