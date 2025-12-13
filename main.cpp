#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

int addTwoNumbers (int x, int y) {
    return x + y;
}

int main() {
    auto a {addTwoNumbers(2, 3)};
    std::cout << a;
    return 0;
}