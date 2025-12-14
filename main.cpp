#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>


template <typename T>
void print(T a) {
    std::cout << a << '\n';
}

void print(bool a) {
    std::cout << std::boolalpha << a << '\n';
}

int main() {
    print<bool>(true);
    print<>(true);
    print(true);
}