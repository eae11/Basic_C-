#include <iostream>

int main() {
    int *p = (int *) malloc(4 * 5);
    p[0] = 250;
    free(p);
//    p[2] = 255;//��Ȼ������,���Ǻ�Σ��

    int *p1 = new int[100];
    int *pold = p1;
    p1[0] = 250;
    delete[] p1;
//    p[20]=1000;//ֱ�ӱ��쳣
//    pold[20] = 1000;//Σ��
//    delete[] pold;//�ظ��ͷ� ֱ�ӱ���


}
