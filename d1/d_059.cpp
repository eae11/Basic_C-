#include <iostream>

/*区别指针可以传入空指针,而引用不可以*/
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

bool Act3(const Role &Acter,Role *&beAct) {//Role * &beAct 加了个引用代表此时beAct指针就是prole指针改变了beAct的指针那么prole指向也改变了,去掉这个引用,则只是形参里的指向改变,prole并不会改变
  beAct->hp -= Acter.damage;
  bool bEnd = beAct->hp < 0;
  beAct = (Role *) &Acter;
  return bEnd;
}


int main() {
  Role user{"奥特曼",200,300,850};
  Role monster{"小怪兽",800,300,50};

  PROLE prole = &monster;
//    if (Act(&user,&monster)) std::cout << monster.Name << " 怪物死亡, 获取经验值:XXXX";
//    if (Act2(user,monster)) std::cout << monster.Name << " 怪物死亡, 获取经验值:XXXX";


  if (Act3(user,prole)) std::cout << prole->Name << " 怪物死亡, 获取经验值:XXXX";
}


