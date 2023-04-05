#include <iostream>
#include <iomanip>

int main() {

  std::cout << std::fixed;//以小数模式输出
  std::cout << 3e20 << '\n';

  std::cout << std::scientific;//科学计数法
  std::cout << 3.1546 << std::endl;

  std::cout << std::defaultfloat;//恢复默认
  std::cout << 3.1546 << std::endl;

  std::cout << std::setprecision(3);//设置小数精度包含整数部位
  std::cout << 43.1545646 << std::endl;

  std::cout << std::showbase;//十进制和八进制显示前缀
//    std::cout << std::noshowbase;//关闭
  std::cout << 65535 << std::endl;

  std::cout << std::hex;
  std::cout << (long long) 65535 * 65535 << std::endl;

  std::cout << std::oct;
  std::cout << 8 << std::endl;

  std::cout << std::dec;
  std::cout << std::left;//左边对齐 默认右边
  std::cout << std::setw(10)<<221 << std::endl;//std::setw(10)设置一次用一次 之前都是设置一次一直有效
  std::cout << std::setw(10)<<21 << std::endl;
  std::cout << std::setfill('*')<<std::setw(10)<<45645 ;
  std::cout <<std::setw(10)<<21665 << std::endl;

  std::cout << std::right;
  std::cout << "啪嗒啪嗒怕"<<std::setw(20)<<"12 "<<"66";


}
