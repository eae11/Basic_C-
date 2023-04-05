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
  bool Act(NPC* beacter) {//C++里可以写函数,C里不行
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
