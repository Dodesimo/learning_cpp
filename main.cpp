#include <iostream>
#include <string.h>

void demo(int x, int& a, int& b) {
    std::cout << x;
    a = 5;
    b = 5;
}

int main() {
    int a{};
    int b{};
    demo(5, a, b);
    std::cout << '\n' << a << '\n' << b;
}