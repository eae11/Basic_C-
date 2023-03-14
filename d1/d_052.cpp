#include <iostream>
#include <cctype>

using std::string;

int main() {
    string str;
    std::cout << "ÇëÊäÈë×Ö·û´®£º";
    std::cin >> str;

    int count = 0;
    for (int i = 0; str[i];) {
        if (((unsigned) str[i] < 0x80)) { // ASCII ×Ö·û
            count++;
            i++;
        } else { // ÖĞÎÄ×Ö·û
            count++;
            i += 2;
        }
    }

    std::cout << "×Ö·û´®³¤¶ÈÎª£º" << count << std::endl;


    return 0;
}
