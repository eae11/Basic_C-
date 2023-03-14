#include <iostream>
#include <cstdarg>


struct SArg {
    int count; //�����ĸ���
    char *cMem;
};


int Average(int count,...) {
//    va_list arg;
    char *arg{};

            va_start(arg,count);//�����ĸ���������

//    std::cout << "start:" << std::hex << (int) arg;

    int sum{};

    for (int i{}; i < count; i++) {
        sum += va_arg(arg,int);//��������ʲô���� va_arg()ÿ����һ�� ֵ�������¶�
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
    std::cout << "ƽ����:" << x;

    SArg y;
    y.count = 5;
    y.cMem = (char *) new int[5]{562,321,256,541,120};
    x = Ave(y);
    std::cout << "ƽ����:" << x;
}