#include <iostream>
#include <random>

int main() {
    std::mt19937 mt {};
    for (int i {0}; i < 10; ++i) {
        std::cout << mt() << '\n';
    }
    return 0;
}