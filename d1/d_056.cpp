#include <iostream>

using std::string;

int main() {
    string str{"id=user;pass=6321123123123123123105;role=��Ӣ��;money=653201;diamond=99990;"};
    string strIn;
    string strOut;
    while (true) {
        std::cout << "��������Ҫ���ĵ�����:\n";
        std::cin >> strIn; //Ҫ������ַ��� ����
        int lfind = str.find(strIn + "=");
        if (lfind == -1)
            std::cout << "�Բ���,��Ҫ���ĵ����Բ�����!";
        else {
            int lend = str.find(";",lfind);
            strOut = str.substr(lfind+strIn.length() + 1,lend - lfind - strIn.length() - 1);
            std::cout << strOut;
        }

    }


}
