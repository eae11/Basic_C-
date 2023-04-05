#include <iostream>

int main() {
  int *p = (int *) malloc(4 * 5);
  p[0] = 250;
  free(p);
//    p[2] = 255;//虽然可以用,但是很危险

  int *p1 = new int[100];
  int *pold = p1;
  p1[0] = 250;
  delete[] p1;
//    p[20]=1000;//直接报异常
//    pold[20] = 1000;//危险
//    delete[] pold;//重复释放 直接报错


}
