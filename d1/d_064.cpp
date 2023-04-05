#include <iostream>

void Add(int&& a) {
  std::cout << a << std::endl;
}

struct Role {
  int hp;
  int mp;
};

Role CreateMonster() {
  Role rt{100, 200};
  return rt;
}

void show(Role&& rl) {//不想创建一个临时变量来保存rt的值  Role &rl的话引用不了(rt局部变量函数结束就没了)  Role rl 的话又多了个临时变量
  std::cout << rl.hp << std::endl;
}

/*
 * 左值;有着明确的内存空间,可以读取写入;
 * 右值:存放在临时的内存空间中(寄存器);
 * https://nettee.github.io/posts/2018/Understanding-lvalues-and-rvalues-in-C-and-C/
 * */
int main() {
  /* int a = 250;
   int &b = a;
   int &&c = a + b;//是一个右值引用*/

  int c = 320 + 250;
  int& d = c;
  int&& e = 320 + 250;
//    int x = c + 320 + 250;
//    Add(x);
  Add(c + 320 + 250);

  show(CreateMonster());
}
