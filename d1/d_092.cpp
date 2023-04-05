#include <iostream>
class T {
 public:
  int hp;
 private:
  int mp;
 public:
  int GetMp() const {
    return mp;
  }
  void SetMp(int mp) {
    T::mp = mp;
  }

  T() = default;
  /*T() {
    std::cout << "无参构造函数" << std::endl;
  }*/
  T(int hp, int mp) {
    std::cout << hp << mp << std::endl;
    std::cout << "有参构造函数" << std::endl;
    this->mp = mp;
    this->hp = hp;
  }
  T(T& t) {
    std::cout << "T(T)" << std::endl;
    hp = t.hp;
    mp = t.GetMp();
  }
};
int main() {

  T t(50, 100);
  std::cout << t.hp << std::endl;
  std::cout << t.GetMp() << std::endl;
  T t2(t);
  std::cout << t2.hp << std::endl;
  std::cout << t2.GetMp() << std::endl;

}
