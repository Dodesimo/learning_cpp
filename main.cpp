#include <iostream>
#include <vector>
#include <ranges>

int main() {
    constexpr std::array arr {1, 2, 3, 5}; //ctad
    std::cout << arr.size() << '\n';
    int size {arr.size()};
}