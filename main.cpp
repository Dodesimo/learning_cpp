#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

void print(int x, int y = 5) {
    std::cout << x << ' ' << y << '\n';
}

int main() {
    print(2);
    print(2, 3);
    return 0;
}