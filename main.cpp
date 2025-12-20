#include <iostream>

template <typename T>
class Pair {
    T x {};
    T y {};
public:
    Pair(const T& a, const T& b):
    x {a},
    y {b}
    {}

    bool equality(const Pair<T>& p);
};

template <typename T>
bool Pair<T>::equality (const Pair<T>&p) {
    return x == p.x && y == p.y;
}

int main() {
    Pair p {3, 4};
    std::cout << std::boolalpha << p.equality({3, 4}) << '\n';
    std::cout << std::boolalpha << p.equality({65, 4});
}