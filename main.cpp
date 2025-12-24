#include <array>
#include <iostream>
#include <cstring>

bool greater(int a, int b) {
    return a > b;
}

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    std::sort(std::begin(arr), std::end(arr), greater); //greater is a function pointer for a comparator;
    for (const auto& a : arr) {
        std::cout << a << '\n';
    }
}