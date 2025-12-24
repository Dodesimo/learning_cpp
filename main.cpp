#include <array>
#include <iostream>
#include <cstring>

void doubleNumber(int& i) {
    i *= 2;
}

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    std::for_each(std::begin(arr), std::end(arr), doubleNumber);
    for (const auto& a : arr) {
        std::cout << a << '\n';
    }
}