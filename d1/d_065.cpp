
#include <iostream>
int Add(int a, int b)
{
    return a + b;
}

int main()
{


    int c = Add(0x1234, 2);

    std::cout << Add;

    char* str = (char*)Add;

    for (int i = 0; i < 30; i++)
    {
        printf("%02X\n", (unsigned char)str[i]);
    }

    //str[0] = 25;

}

