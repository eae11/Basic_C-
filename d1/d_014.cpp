#include <iostream>

int a{100};

int main() {
    int a{160};
    {
        std::cout << a << std::endl;
        int a{350};
        std::cout << a << std::endl;
        {
            char a = 'A';
            std::cout << a << std::endl;
            std::cout << ::a << std::endl;

        }
    }


}
