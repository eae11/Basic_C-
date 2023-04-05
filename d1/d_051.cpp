#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main() {
  /*setlocale(LC_ALL,"chs");
  wchar_t wstr[0x5];
//    wscanf(L"%s",wstr);
  wscanf_s(L"%s",wstr,5);//可接受的最大字符数
  wprintf(L"你的名字是%s",wstr);*/

  /*wchar_t *wstr2 = new wchar_t[0x5];
  wscanf(L"%s",wstr2);
  wprintf(L"你的名字是%s",wstr2);*/

  char name[0x20];
  std::cout << name << std::endl;

}
