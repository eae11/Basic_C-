#include <iostream>

/*找质数*/
int main() {
  int i;
  /*
   * 如果一个数不是素数是合数， 那么一定可以由两个自然数相乘得到， 其中一个大于或等于它的平方根，一个小于或等于它的平方根。并且成对出现。
   *
   */
  for (i = 3; i < 1000; i += 2) {
    bool flag= true;
    for (int j = 3; j <= sqrt(i); j += 2) {
      if (i % j == 0) {
        flag= false;
        break;
      }
    }
    if (flag) {
      std::cout << i << std::endl;
    }
  }

}
