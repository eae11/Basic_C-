#include <iostream>
class Role2 {
 public:
  int HP;
  int lv = 100;
  int damage = 200;
  Role2(Role2& role) : HP(role.HP) {//ֻ���ʼ��ָ����ֵ
    std::cout << "�����˸������캯��" << std::endl;
  }


  /* Role2(int _lv, int _damage) {
    std::cout << lv << damage << std::endl;
    std::cout << "�вι��캯��" << std::endl;
    lv = _lv;
    damage = _damage;
    std::cout << lv << damage << std::endl;
  }*/

  /*��Ա�ð�˳���ʼ��,HP��ʼ��Ϊlv*3,��lv��ʱֵ��δ֪��*/
  /*Role2(int _lv, int _damage) : lv(_lv), damage(_damage), HP(lv * 3) {//Ч�ʸ���,ĳЩ�����ֻ��ʹ�����ַ�ʽ���г�ʼ��
    std::cout << lv << damage << std::endl;
    std::cout << "�вι��캯��" << std::endl;
    std::cout << lv << damage << std::endl;
  }*/

  Role2(int _lv, int _damage) : Role2(_lv) {
    std::cout << "lv:" << lv << "damage:" << damage << std::endl;
    std::cout << "�вι��캯��" << std::endl;
//    lv = _lv;
    damage = _damage;
    std::cout << "lv:" << lv << "damage:" << damage << std::endl;
  }
  Role2(int lv) {
    std::cout << "ί�й��캯��" << std::endl;
    this->lv = lv;
  }
  int GetHp() const {
    return HP;
  };
  void SetHp(int hp) {
    HP = hp;
  }
  int GetLv() const {
    return lv;
  }
  void SetLv(int lv) {
    Role2::lv = lv;
  }
  int GetDamage() const {
    return damage;
  }
  void SetDamage(int damage) {
    Role2::damage = damage;
  }
};

int main() {
  Role2 t1(50, 20);
//  std::cout << t1.GetHp() << std::endl;
//  std::cout << t1.get << std::endl;
  Role2 t2(t1);//������Ĭ���ṩ��һ���������캯��,����Ҳ�����ֶ�ָ���������캯��
  std::cout << "_________________" << std::endl;
//  std::cout << t2.GetHp() << std::endl;
  std::cout << t2.GetLv() << std::endl;
  std::cout << t2.GetDamage() << std::endl;

  Role2 t3=t1;//��ʱͨ�����ø������캯�������t3�ĳ�ʼ��
  t3=t1;//t3�Լ���ɳ�ʼ���� �����ٵ��ù��캯����
}
