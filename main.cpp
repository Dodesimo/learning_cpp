#include <iostream>
#include <vector>
#include <ranges>

int main() {
    constexpr std::array arr {1, 2, 3, 5}; //ctad
    for (std::size_t i {}; i < arr.size(); ++i) {
        std::cout << arr[i];
    }
}