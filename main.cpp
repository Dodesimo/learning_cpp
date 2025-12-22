#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::array arr {1, 2, 3, 5}; //ctad
    std::cout << arr.size() << '\n';
    constexpr int length {arr.size()}; //return value is constexpr, std::size_t  can thus be converted to int. even then, it fits in teh range
}