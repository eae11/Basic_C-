#include <iostream>

/*Ĭ����int __cdecl ave(int,int)
 * __cdecl������ջ˳����ҵ���
 *��ջƽ��:˭����˭ƽ�� main������add sp 8
 *����Ϊ__cdecl���ֶ�ջƽ�ⷽʽ,�ܹ�֧�ֲ���������
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


/*__stdcall ������ջ˳����ҵ���
 * ��ջƽ��:�����Լ��ָ�ƽ�⺯���Լ�ret 8
 * Windows�����WINAPI CAILBACK����_stdcall�ĺ�
 * ���ɵĺ���������»���,�����@�Ͳ����ߴ�
 * push 2
 * push 1
 * call 0x...
 * ret 8
 * */
/*int __stdcall ave(int a, int b) {
  return a + b;
}*/


/*��һ������ͨ��ecx����
 * �ڶ�������ͨ��edx����ʣ��
 * ������ջ˳����ҵ���
��ջƽ��:�����Լ��ָ�ջƽ��
 fastcall�ĺ���ִ���ٶȱȽϿ�
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
