#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

template <typename T>
T max (T x, T y) {
    return (x > y) ? x : y;
}
int main() {
    std::cout << max<int>(2, 4);
}