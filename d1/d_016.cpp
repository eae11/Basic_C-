#include <iostream>
int main() {
  struct Car{
    char logo;
    short wheel;
    int price;

  };
  Car a={'a',1515,200};//C前面还得加struct
  Car b={'b',1515,200};
  Car c={'c',1515,200};

  std::cout << a.logo<<a.wheel<<a.price<<std::endl;
  std::cout << b.logo<<b.wheel<<b.price<<std::endl;
  std::cout << c.logo<<c.wheel<<c.price<<std::endl;

}
