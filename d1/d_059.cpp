#include <iostream>

/*����ָ����Դ����ָ��,�����ò�����*/
typedef struct Role {
    char Name[0x20];
    int hp;
    int mp;
    int damage;
} *PROLE;

bool Act(const Role *Acter,Role *beAct) {

    beAct->hp -= Acter->damage;
    bool bEnd = beAct->hp < 0;

    return bEnd;
}

bool Act2(const Role &Acter,Role &beAct) {//Role & Acter=user;Role & beAct=monster

    beAct.hp -= Acter.damage;
    bool bEnd = beAct.hp < 0;

    return bEnd;
}

bool Act3(const Role &Acter,Role *&beAct) {//Role * &beAct ���˸����ô����ʱbeActָ�����proleָ��ı���beAct��ָ����ôproleָ��Ҳ�ı���,ȥ���������,��ֻ���β����ָ��ı�,prole������ı�
    beAct->hp -= Acter.damage;
    bool bEnd = beAct->hp < 0;
    beAct = (Role *) &Acter;
    return bEnd;
}


int main() {
    Role user{"������",200,300,850};
    Role monster{"С����",800,300,50};

    PROLE prole = &monster;
//    if (Act(&user,&monster)) std::cout << monster.Name << " ��������, ��ȡ����ֵ:XXXX";
//    if (Act2(user,monster)) std::cout << monster.Name << " ��������, ��ȡ����ֵ:XXXX";


    if (Act3(user,prole)) std::cout << prole->Name << " ��������, ��ȡ����ֵ:XXXX";
}


