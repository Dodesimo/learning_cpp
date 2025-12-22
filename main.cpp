#include <iostream>
#include <vector>
#include <ranges>

template <typename U, std::size_t N> //U is a type parameter, N is a non-type parameter
void passByReference(const std::array<U, N>& a) {
    for (auto i{0}; i < N; ++i) {
        std::cout << a[i];
    }
}

int main() {
    constexpr std::array arr {1, 2, 3, 5, 7}; //ctad
    constexpr std::array arr2 {"testing", "testing", "testing"}; //ctad will deduce this of type <const char*, 3>?
    passByReference(arr);
    passByReference(arr2);
}