// class22.1.cpp : ���ļ����� "main" ����������ִ�н��ڴ˴���ʼ��������
//

#include <iostream>

struct NPC {
  int hp;
  int mp;
  int damage;
};

struct MONSTER {
  int hp;
  int mp;
  int damage;
  int price;
};

struct ROLE {
  int hp;
  int mp;
  int damage;
  int diamond;
  bool Act(NPC* beacter) {//C++�����д����,C�ﲻ��
    beacter->hp -= damage;
    return beacter->hp > 0;
  }
};
class CROLE {
 public:
  int hp;
  int mp;
  int damage;
  int diamond;
  bool Act(NPC* beacter) {
    beacter->hp -= damage;
    return beacter->hp > 0;
  }
  void Init() {
    hpRecover = 3;
  }
 private:
  int hpRecover;

};
int main() {
  CROLE zs;//{1000, 1000, 50, 1000};
  CROLE ls;//{1000, 500, 100, 6000};

  zs.Init();
  ls.Init();
  zs.Act((NPC*) &ls);
  std::cout << ls.hp;
}
