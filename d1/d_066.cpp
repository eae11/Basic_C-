#include <iostream>

typedef char(*pfAdd)(int,int); //声明一个函数指针类型 pfAdd 就相当于char (*) (int,int) Add
using pFAdd = char (*)(int,int);//声明一个函数指针类型
using pRole = int (*)(int hp,int mp);

struct Role {
  int hp;
  int mp;
};

int Test(int a,int b,pRole x) {
  return x(a,b);
}

int Exp(Role rl) {
  return rl.hp + rl.mp;
}

int AddX(int a,int b) {
  return a * 10 + b;
}

int Add(int a,int b) {
  return (a + b) / 2;
}

int main() {
  int (*pxAdd)(int,int) = Add; //声明函数指针
  std::cout << pxAdd(110,20) << std::endl;

  pfAdd pAdd = (pfAdd) Add;
  pFAdd pAdd1 = (pFAdd) AddX;

  std::cout << pAdd(110,20) << std::endl;
  std::cout << pAdd1(6,6) << std::endl;


  Role rl{100,350};

  Exp(rl);

  std::cout << Test(120,2031,(pRole) Exp) << std::endl;

  pRole pExp = (pRole) Exp;

  std::cout << pExp(100,350) << std::endl;
}
