#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

template <int N>
void print() {
    std::cout << N << '\n';
}

int main() {
    print<3>();
    return 0;
}