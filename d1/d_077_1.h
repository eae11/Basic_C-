#ifndef BASIC_C___D1_D_077_1_H_
#define BASIC_C___D1_D_077_1_H_
#include "d_077_2.h"
int ave(int a, int b);
int bigger(int a, int b);
extern int acount;
static int atest = 999;

//静态函数和内联函数可以在头文件中定义
static void test() {

}
inline int TestA() {
  return 1;
}
#endif //BASIC_C___D1_D_077_1_H_
