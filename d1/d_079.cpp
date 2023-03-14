#include <iostream>

/*默认是int __cdecl ave(int,int)
 * __cdecl参数入栈顺序从右到左
 *堆栈平衡:谁调用谁平衡 main函数里add sp 8
 *正因为__cdecl这种堆栈平衡方式,能够支持不定量参数
 *push 2
 * push 1
 * call 0x...
 * ret
 * add sp 8
 *
 * */
/*int ave(int a, int b) {
  return a+b;
}*/


/*__stdcall 参数入栈顺序从右到左
 * 堆栈平衡:函数自己恢复平衡函数自己ret 8
 * Windows编程中WINAPI CAILBACK都是_stdcall的宏
 * 生成的函数名会加下划线,后面跟@和参数尺寸
 * push 2
 * push 1
 * call 0x...
 * ret 8
 * */
/*int __stdcall ave(int a, int b) {
  return a + b;
}*/


/*第一个参数通过ecx传递
 * 第二个参数通过edx传递剩余
 * 参数入栈顺序从右到左
堆栈平衡:函数自己恢复栈平衡
 fastcall的函数执行速度比较快
 mov edx,2
 mov ecx,1
 call 0x...
 ret
*/

int __fastcall ave(int a, int b) {
  return a + b;
}
int main() {
  ave(1, 2);
}
