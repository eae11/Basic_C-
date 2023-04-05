#include <iostream>

struct Skill {
  int Mpp; //内力消耗
  int Spp;//怒气
  int Act;//攻击力
  int ActB;//翻倍攻击
  int CoolDown;//冷却时间 5
};

struct USkill {
  Skill *skill{};
  int lv;
  int cooldown; //5-- 0
  bool buse{};//是否激活
};

struct Role {
  int Hp;
  int MaxHp;
  int Mp;
  int MaxMp;
  int Sp;
  int MaxSp;
  int Act;
  USkill skills[5];
};

int main() {
  Skill AllSkills[11]
      {
          {0,  0,  10, 1, 0},
          {10, 0,  50, 1, 1},
          {10, 0,  60, 1, 1},
          {30, 0,  0,  2, 3},
          {30, 0,  300,0, 3},
          {50, 0,  0,  5, 4},
          {50, 0,  500,0, 4},
          {100,0,  0,  10,6},
          {100,0,  50, 2, 6},
          {0,  100,500,5, 0},
          {0,  100,200,0, 0}
      };
  Role *User = new Role{1000,1000,1000,1000,0,100,100,{
      {&AllSkills[0],0,0,true},
      {&AllSkills[1],0,0,true},
      {&AllSkills[2],0,0,true},
      {&AllSkills[3],0,0,false},
      {&AllSkills[10],0,0,false}}
  };

  Role *Monster = new Role
      {
          1000,1000,1000,1000,0,100,100,
          {
              {&AllSkills[0],0,0,true},
              {&AllSkills[1],0,0,true},
              {&AllSkills[2],0,0,true},
              {&AllSkills[4],0,0,true},
              {&AllSkills[10],0,0,true}
          }
      };
  std::cout << "角色姓名:郝英俊" << std::endl;
  std::cout << "生命:" << User[0].Hp << "/" << User[0].MaxHp << std::endl;
  std::cout << "内力:" << User[0].Mp << "/" << User[0].MaxMp << std::endl;
  std::cout << "怒气:" << User[0].Sp << "/" << User[0].MaxSp << std::endl;
  std::cout << "基本攻击:" << User[0].Act << std::endl;

  for (auto &skill: User[0].skills) {
    if (skill.buse) {
      std::cout
          << "消耗MP " << skill.skill[0].Mpp
          << "消耗SP " << skill.skill[0].Spp
          << "附加攻击 " << skill.skill[0].Act
          << "翻倍攻击 " << skill.skill[0].ActB
          << "冷却 " << skill.skill[0].CoolDown
          << "技能等级 " << skill.lv
          << std::endl;
    }
  }
}
