#include <iostream>

char *readRef(const char *ref,const char *cmds) {
  for (int i = 0; cmds[i]; ++i) {
    if (ref[0] == cmds[i]) {
      bool flag = true;
      int x;
      for (x = 0; ref[x]; ++x) {
        if (ref[x] != cmds[i + x]) {
          flag = false;
          break;
        }
      }
      if (flag) {
        return (char *) (cmds + i + x);
      }

    }
  }
  return nullptr;
}

int main(int count,char **arg) {
  char *id{},*pass{},*country{};
  const char *refId{"id:"};
//    const char *refPass{"ass:\0c"};
  const char *refPass{"pass:"};
  const char *refCountry{"country:"};
  for (int i = 1; arg[i]; ++i) {
//        for (int i = 0; i < 2; ++i) {
//
//        }
    if (id == nullptr) {
      id = readRef(refId,arg[i]);
      if (id != nullptr) {
        continue;
      }
    }
    if (pass == nullptr) {
      pass = readRef(refPass,arg[i]);
      if (pass != nullptr) {
        continue;
      }
    }
    if (country == nullptr) {
      country = readRef(refCountry,arg[i]);
      if (country != nullptr) {
        continue;
      }
    }
  }

  if ((int) id * (int) pass * (int) country) {
    std::cout << "账号:" << id;
    std::cout << "密码:" << pass;
    std::cout << "国家:" << country;
  } else {
    std::cout << "请使用命令的方式调用本程序 输入 /? 查看帮助!";
  }

}
