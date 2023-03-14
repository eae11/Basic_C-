#include <iostream>
#include "d_084_1.h"
#include "d_084_1.h"
#define VERSION 100
#define SENDMES 1
#if VERSION == (100 + 5) || SENDMES
void SendSms() {
  std::cout << "100" << std::endl;
}
#elif VERSION == 101
void SendSms() {
  std::cout << "101" << std::endl;
}
#else
void SendSms(){
  std::cout << "  " << std::endl;
}
#endif

#ifdef UNICODE
wchar_t t;
#else
char a;
#endif
int main() {

}
