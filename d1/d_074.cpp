#include <iostream>
/*函数模板的本质是
 * 编译器会根据不同的参数生成几套不同的函数*/
template<typename T1, typename T2, typename TR=T1>
TR ave(T1 a, T2 b) {
  return (a + b) / 2;
}

template<int max, int min, typename T>
bool changeHp(T& hp, T damage) {
  hp -= damage;
  if (hp > max) {//max 和min在这里都是常量
    hp = max;
  }
  return hp < min;
}

template<typename T, short count>
//count自动被填为数组的个数
T ave3(T (& arr)[count]) {
  T all{};
  for (const auto& item : arr) {
    all += item;
  }
  return all / count;
}

/*int ave3(int (&arr)[5]) {
  return 0;
}*/
int main() {
  std::cout << ave<double>(char(1), 200) << std::endl;

  int hp = 2500;
  changeHp<2000, 100>(hp, 100);
  std::cout << hp << std::endl;
  int a[] = {1, 2, 3, 4, 5};
  std::cout << ave3(a) << std::endl;
}
