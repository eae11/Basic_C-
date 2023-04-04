#include <iostream>
class T2;
class T {
 private:
  int hp;
  int mp;
  friend T2;
  friend void SetHP(T& t, T2& t2);
  friend void SetMP(T& t, T2& t2);
  void GetMP() {
    std::cout << mp << std::endl;
  }
};
class T2 {
 private:
  int hp;
  int mp;
  friend void SetHP(T& t, T2& t2);
  friend void SetHP(T& t, T2& t2);
  void GetMP() {
    T t1;
    t1.mp = 300;//friend
    std::cout << mp << std::endl;
  }
};
void SetHP(T& t, T2& t2) {
  t.hp = 250;//friend ���Է���˽�б���
}
void SetMP(T& t, T2& t2) {
  t.mp = 250;
  t.GetMP();//friend ���Է���˽�к���
}
int main() {
  T t1;
  T2 t2;
  SetHP(t1, t2);

}
