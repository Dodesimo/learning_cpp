#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

auto max(auto a, auto b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max(2, 3.0);
    return 0;
}