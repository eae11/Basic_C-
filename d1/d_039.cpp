#include <iostream>
#include <conio.h>

struct Role {
    int Hp;
    int MaxHp;
    int Mp;
    int MaxMp;
    int act;
    int cantact;  //��ֹ����
    int bufcount; //�غ�
    bool cant;
};
struct SKill {
    int needMp;
    int AddAct;
    int cantact;
    double percentageSucksBlood;
    int damage;

};

int main() {
    Role roles[2]
            {
                    {3000, 3000, 1000,1000,50, 0,false},
                    {30000,30000,1000,1000,190,0,false}
            };
    SKill skill[5]
            {
                    {30,50,0},
                    {0, 20,1},
                    {},
                    {},
                    {}
            };
    do {
        system("cls");
        printf("����[ %d / %d ]                    BOSS����[ %d / %d ]\n",roles[0].Hp,roles[0].MaxHp,roles[1].Hp,
               roles[1].MaxHp);
        printf("����[ %d / %d ]  ������ [%d]",roles[0].Mp,roles[0].MaxMp,roles[0].act);
        int inKey = _getch() - 49;


        roles[0].Mp -= skill[inKey].needMp;

        roles[1].Hp = roles[1].Hp - skill[inKey].AddAct - roles[0].act;

        if (roles[1].cantact > 0) {
            roles[1].cantact--;
        } else {
            roles[0].Hp -= roles[1].act;
        }
    } while (1);

}
