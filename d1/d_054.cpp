#include <iostream>
#include <string>

using std::string;

int main() {
  /*char str[0x10] = "123";
  char strB[0x10] = "456";
  char strC[0x20];
  memcpy(strC,str,strlen(str));
  memcpy(strC + strlen(str),strB,strlen(strB)+1);//'0'也拷贝过来
  std::cout << strC << std::endl;*/

//    string str{"吃葡萄不吐葡萄皮"};
//    std::cin >> str;
//    std::cout << str;

  //string 变量名称{“字符串”,要截取的长度}
  string str1{"你dadadw号", 3};//注意中文 截取三个字节
  std::cout << str1 << std::endl;
  //string变量名称{“字符串”,起始位置,要截取的长度}
  string str2{"0123456", 2, 3};//从2开始截3位
  std::cout << str2 << std::endl;

  /*string str3;
  std::cin >> str3;
  string str4{str3,0,6};
  std::cout << str4 << std::endl;*/
  //:string变量名称(要复制的个数, "字符')
  string str5(6, 'a');
  std::cout << str5 << std::endl;

  string str6, str7;
  str6 = "123";
  str7 = str6 + "" + "456";
  std::cout << str7 << std::endl;
  fflush(stdout);

  int age;
  std::cin >> age;
  string str8, ls;
  ls = "用户的年龄为";
  str8 = ls + std::to_string(age);
  std::cout << str8 << std::endl;
}
