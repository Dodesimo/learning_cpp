#include <iostream>
#include <optional>
#include <string.h>

template <typename T, typename U>
struct Pair {
    T first {};
    U second {};
};

//what is std::pair, a standard way to do typenames.
template <typename T, typename U>
constexpr T max(std::pair<T, U> p) {
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