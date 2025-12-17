#include <iostream>
#include <optional>
#include <string.h>

template <typename T, typename U>
struct Pair {
    T a {};
    T b {};
};
//what is std::pair, a standard way to do typenames.
template <typename T, typename U>
constexpr T max(std::pair<T, U> p) {
    if (p.first < p.second) {
        return p.second;
    }
    return p.first;
}

template <typename T, typename U>
Pair(T, U) -> Pair<T, U>;

int main() {
    std::pair a {2, 2}; //ctad, class template argument deducation
    std::cout << max(a) << '\n';
}