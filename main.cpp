#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

template <auto N>
void print() {
    std::cout << N << '\n';
}

int main() {
    print<3>();
    print<'c'>();
    return 0;
}