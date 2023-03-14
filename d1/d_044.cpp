#include <iostream>

/*
 * void * memcpy(void* _Dst,const void* _Src,size_t size)
 * memcpy可以将_Src区域的内存复制到_Dst区域,复制的长度为size
 * */
int main() {
    int a[5] = {10001,10002,10003,10004,10005};
    int *b = new int[5];
    memcpy(b,a,5 * sizeof(int));
    for (int i = 0; i < 5; ++i) {
        std::cout << b[i] << std::endl;
    }
    memset(b,0x1234,20);//注意val是设置字节的值  原则上最多ff
    for (int i = 0; i < 5; ++i) {
        std::cout <<std::hex<< b[i] << std::endl;
    }
}
