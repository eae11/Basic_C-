#include <iostream>

void Add(int &&a) {
    std::cout << a << std::endl;
}

struct Role {
    int hp;
    int mp;
};

Role CreateMonster() {
    Role rt{100,200};
    return rt;
}

void show(Role &&rl) {//���봴��һ����ʱ����������rt��ֵ  Role &rl�Ļ����ò���  Role rl �Ļ��ֶ��˸���ʱ����
    std::cout << rl.hp << std::endl;
}

/*
 * ��ֵ;������ȷ���ڴ�ռ�,���Զ�ȡд��;
 * ��ֵ:�������ʱ���ڴ�ռ���;
 * https://nettee.github.io/posts/2018/Understanding-lvalues-and-rvalues-in-C-and-C/
 * */
int main() {
    /* int a = 250;
     int &b = a;
     int &&c = a + b;//��һ����ֵ����*/

    int c = 320 + 250;
    int &d = c;
    int &&e = 320 + 250;
    e = 1500;

//    int x = c + 320 + 250;
//    Add(x);
    Add(c + 320 + 250);

    show(CreateMonster());
}
