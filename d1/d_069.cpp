#include <iostream>

//int ave(int a,int b) {
//    std::cout << "两个int参数" << std::endl;
//    return (a + b) / 2;
//}

int ave(int &a,int &b) {//不能和int ave(int a,int b)重载
  std::cout << "两个int参数" << std::endl;
  return (a + b) / 2;
}


//int ave(const int a,const int b) {//不能和int ave(int a,int b)重载
//    std::cout << "两个int参数" << std::endl;
//    return (a + b) / 2;
//}

int ave(const int &a,const int &b) {//可以和int ave(int &a,int &b) 进行重载
  std::cout << "两个int参数" << std::endl;
  return (a + b) / 2;
}

int ave(int a,int b,int c) {
  std::cout << "三个int参数" << std::endl;
  return (a + b + c) / 3;
}

float ave(float a,float b) {
  std::cout << "两个float参数" << std::endl;
  return (a + b) / 2;
}

float ave(float a,float b,float c) {
  std::cout << "三个float参数" << std::endl;
  return (a + b + c) / 3;
}

int main() {
  /*char a = 100;
  char b = 100;
  std::cout << ave((int) a,(int) b) << std::endl;//a和b强制为int只是一个临时变量并没有自己的引用因此还是会走float*/

  /* const*/ int a = 100;
  /*const */int b = 100;
  std::cout << ave(a,b) << std::endl;

  std::cout << ave(2,3,4) << std::endl;
  std::cout << ave(2.0f,3.0f) << std::endl;
  std::cout << ave(2.0f,3.0f,4.0) << std::endl;

}
