#include <iostream>
#include <vector>
#include <ranges>

void passByReference(const std::array<int, 5>& a) {
    for (auto i{0}; i < a.size(); ++i) {
        std::cout << a[i];
    }
}

int main() {
    constexpr std::array arr {1, 2, 3, 5, 7}; //ctad
    passByReference(arr);
}