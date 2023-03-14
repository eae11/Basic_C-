#include <iostream>

int f1(int a,int b) {
    a = a + 250;
    return a + b;
}

int add(int a,int b) {
    int c = 250;
    int d = f1(a,b);
    c = c + d;
    return c;
}

int main() {
    std::cout << add << std::endl;
    int x = add(250,50);
}
