#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

template <typename T, typename U>
T max (T a, U b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max(2, 3.0);
    return 0;
}