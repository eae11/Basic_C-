#include <iostream>

int main() {
  int a[10]{ 105,98,73,58,32,31,25,22,3,1 };
//    int a[10]{1,3,22,25,31,32,58,73,98,105};
  int acount = sizeof(a) / sizeof(int);
  int *newa = new int[acount];
  bool flag = a[0] > a[1];
  int x;
  std::cout << "请输入你要插入的值" << std::endl;
  std::cin >> x;
  int getIndex{};
  for (int i = 0; i < acount; ++i) {
    if (flag ^ x < a[i]) {
      getIndex = i;
      break;
    }
  }
  memcpy(newa,a,getIndex * sizeof(int));
  newa[getIndex] = x;
  memcpy(&newa[getIndex + 1],&a[getIndex],(acount - getIndex) * sizeof(int));
  for (int i = 0; i < acount + 1; ++i) {
    std::cout << newa[i] << std::endl;
  }
}
