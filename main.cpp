#include <array>
#include <iostream>
#include <cstring>
#include <functional>

int sumTo(int n) {
    if (n == 0){return 0;}
    return n + sumTo(n - 1);
}

int main() {
    std::cout << sumTo(100);
    return 0;
}