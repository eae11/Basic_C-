#include <iostream>
/*
 * inline声明一个内联函数
内联函数将会建议编译器把这个函数处理成内联代码以提升性能始终是建议,具体编译器是否采纳,由编译器决定
 * */
inline int Add(int a, int b) {
  return a + b;
}
int main() {

}
