#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

int main() {
    using integer = int;
    integer a {};
    std::cout << "here's an integer";
    std::cin >> a;
    std::cout << a;
    return 0;
}