#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>


double divide(int x, int y) {
    assert(y != 0);
    return static_cast<double>(x) / y;

}

int main() {
    int x {};
    int y {};
    std::cout << "Enter first number. \n";
    std::cin >> x;

    std::cout << "Enter second number. \n";
    std::cin >> y;

    std::cout << divide(x, y);
}