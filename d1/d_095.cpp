#include <iostream>
class hstring {
 private:
  unsigned short len;
  unsigned short lenth(const char* str) {
    unsigned short len{};
    while (str[len++]);
    return len;
  }
  char* c_str;
 public:
  hstring() {
    len = 0;
    c_str = new char[1]{0};
  }
  hstring(const hstring& s) : hstring(s.Show()) {

  }
  hstring(const char* str) {
    len = lenth(str);
    this->c_str = new char[len];
    memcpy(c_str, str, len);
  }
  char* Show() const {
    return c_str;
  }
  ~hstring() {
    delete[] c_str;
  }
  void SetStr(const char* str) {
    unsigned short mlen = lenth(str);
    if (mlen > len) {
      delete[] c_str;
      c_str = new char[mlen];
    }

    memcpy(c_str, str, mlen);
  }
};
int main() {
  hstring str("ÄãºÃ!µØÇòÈË");
  hstring strA(str);
  str.SetStr("4646151561");
  std::cout << str.Show() << std::endl;
  std::cout << strA.Show() << std::endl;

}
