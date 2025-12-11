#include <iostream>
#include <random>
#include <chrono>

int main() {
    std::mt19937 mt {std::random_device{}()};
    std::uniform_int_distribution<int> die {1, 6};

    for (int count {1}; count < 10; ++count) {
        std::cout << die(mt) << '\n';
    }
}