#include <iostream>
#include <locale>

int main() {
  int a{ 10 };

  int b{ 5 };

  int c{ 6 };

  c = b + a++;
  c = b++ + a;

  c=b+++a; // b+  ++a;   b++ +a; 后缀优先,翻译成后面那种
  return 0;

}
