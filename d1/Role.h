#ifndef BASIC_C___D1_ROLE_H_
#define BASIC_C___D1_ROLE_H_

class Role {
 private:
  int hpRecover;
  void Init();
  int hp;
 public:
  int damage;
  //mutable�����ĳ�Ա�������Ա�const��Ա�����޸�
  mutable int lv;
  void Act(Role& role);
  inline /*const*/ int GetHp() const { //constдǰ���Ǵ�����ֵ��const д����������������const����
    //��const��Ա������,thisָ��Ҳ�����constָ��
//    this->damage=2;

//    SetLv(2);
//    lv=3;
    return hp;
  }
  Role* bigger(Role* role);
  Role& SetHpRecover(int hp_recover);
  Role& SetHp(int hp);
  Role& SetDamage(int damage);
  Role& SetLv(int lv);
  const int& GetLv() const;
  int GetDamage() const;
  int Role::GetDamage();
  bool IsBig(Role r1) {
    return r1.GetLv() > lv;
  }
  explicit Role(int _lv = 500) {
    std::cout << -_lv << std::endl;
    lv = _lv;
  }
};

#endif //BASIC_C___D1_ROLE_H_
