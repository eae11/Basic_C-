#include <iostream>

typedef struct Role {
    char *Name;
    int Hp;
    int MaxHp;
    int Mp;
    int maxMp;
    int lv;

} *PROLE;


int clen(const char *str) {
    int i;
    for (i = 0; str[i]; ++i) {

    }
    return i;
}

char *cstr(const char *str) {
    int len = clen(str);
    char *s = new char[len + 1];//���ϵ��ڴ�
//    char s[0x20];//�м�ָ�벻Ҫ���ؾֲ�����
    memcpy(s,str,len + 1);
    return s;
}

Role &CreateMonster(const char *str,int Hp,int Mp) {
    /*  Role rt{cstr(str),Hp,Hp,Mp,Mp,1};//�ֲ�������Ҫ���¸�ֵ �������
      return rt;*/
    PROLE rt = new Role{cstr(str),Hp,Hp,Mp,Mp,1};//�������� ֻ��ֵһ�� ��ָ��Ҳ����
    return *rt;
}

void Add(int &a) {
    a = a + 100;
}

void ave(int(&art)[100]) {
    std::cout << sizeof(art) << std::endl;
    for (auto x: art);
}

int main() {
    char *s1;
    s1 = cstr("123");
    std::cout << s1 << std::endl;
    Role &role = CreateMonster("atoman",1500,1500);
    std::cout << role.Name << std::endl;
    std::cout << role.Hp << "/" << role.MaxHp << std::endl;

//    float p = 250.60f;
    //Add(p);//���ò�������ת��
//    std::cout << p << std::endl;
    int a[100];
    int (&b)[100] = a;//��������

    ave(a);

}
