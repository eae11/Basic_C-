#include <iostream>

/*������*/
int main() {
    int i;
    /*
     * ���һ�������������Ǻ����� ��ôһ��������������Ȼ����˵õ��� ����һ�����ڻ��������ƽ������һ��С�ڻ��������ƽ���������ҳɶԳ��֡�
     *
     */
    for (i = 3; i < 1000; i += 2) {
        bool flag= true;
        for (int j = 3; j <= sqrt(i); j += 2) {
            if (i % j == 0) {
                flag= false;
                break;
            }
        }
        if (flag) {
            std::cout << i << std::endl;
        }
    }

}
