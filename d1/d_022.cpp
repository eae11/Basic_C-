// class7.1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

int main()
{
    unsigned int sId, sPr;
    std::cout << "同学,请输入您的学号:";
    std::cin >> sId;

    switch (sId)
    {

        case 15692:
            sPr = 500;
            break;
        case 65421:
            sPr = 450;
            break;
        case 98741:
            sPr = 250;
            break;
        case 2531:
            sPr = 150;
            break;
        case 666:
            [[fallthrough]];//C++17新特性 相当于什么都不写
        case 321:
            sPr = sId * 2; //sPr=sId<<1;
            break;
        default:
            sPr = 0;
            std::cout << "对不起,同学,您本次活动并未中奖,请下次再来吧!\n";
            break;
    }

    if(sPr)std::cout << "同学,恭喜您,您获得了奖学金 " << sPr << " 韩币";
}
