#include <iostream>

/*�����ռ�
 * using namespace ����
 * using ����::ָ��  ���ַ�ʽ
 * */
namespace lGame //��main��������
{
    int HP{1000};
    int MP{1000};
    int lv{100};
    namespace Weapon{ //�����ռ����Ƕ��
        int damage{3000};
        int lv=lGame::lv;

    }
}
int main() {

    using std::cout;
    using std::endl;
    cout<<45<<endl;


    lGame::HP=500;
    using lGame::HP;
//    std::cout << lGame::HP;
    cout << HP;
    cout << lGame::Weapon::damage;


    /*using namespace std;

    cout<<123<<endl;*/

}
