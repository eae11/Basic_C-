#include <iostream>

/*
 * void * memcpy(void* _Dst,const void* _Src,size_t size)
 * memcpy���Խ�_Src������ڴ渴�Ƶ�_Dst����,���Ƶĳ���Ϊsize
 * */
int main() {
    int a[5] = {10001,10002,10003,10004,10005};
    int *b = new int[5];
    memcpy(b,a,5 * sizeof(int));
    for (int i = 0; i < 5; ++i) {
        std::cout << b[i] << std::endl;
    }
    memset(b,0x1234,20);//ע��val�������ֽڵ�ֵ  ԭ�������ff
    for (int i = 0; i < 5; ++i) {
        std::cout <<std::hex<< b[i] << std::endl;
    }
}
