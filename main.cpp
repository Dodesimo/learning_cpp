#include <array>
#include <iostream>
#include <cstring>
#include <functional>

int sumDigits(int x) {
    if (x == 0){return 0;}
    return sumDigits(x / 10) + (x % 10);
}
int main() {
    std::cout << sumDigits(101);
    return 0;
}