#include <iostream>

/*命名空间
 * using namespace 名字
 * using 名字::指令  两种方式
 * */
namespace lGame //放main函数外面
{
int HP{1000};
int MP{1000};
int lv{100};
namespace Weapon{ //命名空间可以嵌套
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
