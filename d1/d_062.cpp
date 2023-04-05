#include <iostream>
#include <cstdarg>


struct SArg {
  int count; //参数的个数
  char *cMem;
};


int Average(int count,...) {
//    va_list arg;
  char *arg{};

  va_start(arg,count);//参数的个数告诉它

//    std::cout << "start:" << std::hex << (int) arg;

  int sum{};

  for (int i{}; i < count; i++) {
    sum += va_arg(arg,int);//参数都是什么类型 va_arg()每调用一次 值都会往下读
  }

  va_end(arg);

  sum = sum / count;
  return sum;
}

int Ave(SArg &y) {
  int sum{};
  int *ary = (int *) y.cMem;
  for (int i = 0; i < y.count; i++) {
    sum += ary[i];
  }

  return sum / y.count;
}

int main() {
  int x = Average(5,562,321,256,541,120);
  std::cout << "平均数:" << x;

  SArg y;
  y.count = 5;
  y.cMem = (char *) new int[5]{562,321,256,541,120};
  x = Ave(y);
  std::cout << "平均数:" << x;
}