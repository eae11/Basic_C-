#include <iostream>
#include <cctype>

using std::string;

int main() {
  string str;
  std::cout << "请输入字符串：";
  std::cin >> str;

  int count = 0;
  for (int i = 0; str[i];) {
    if (((unsigned) str[i] < 0x80)) { // ASCII 字符
      count++;
      i++;
    } else { // 中文字符
      count++;
      i += 2;
    }
  }

  std::cout << "字符串长度为：" << count << std::endl;


  return 0;
}
