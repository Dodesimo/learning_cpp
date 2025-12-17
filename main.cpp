#include <iostream>
#include <optional>
#include <string.h>
template <typename T>
struct Pair {
    T first {};
    T second {};
};

template <typename T>
constexpr T max(Pair<T> p) {
    if (p.first < p.second) {
        return p.second;
    }
    return p.first;
}

int main() {
    Pair<int> p1 {5, 6};
    std::cout << max<int>(p1) << '\n';
    Pair<double> p2 {5.2, 6.2};
    std::cout << max<double>(p2) << '\n';
    return 0;
}