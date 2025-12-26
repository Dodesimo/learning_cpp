#include <array>
#include <iostream>
#include <cstring>
#include <functional>

bool validate(int x, int y, std::function<bool(int, int)> fcn) {
    if (fcn(x, y)) {
        return true;
    }
    return false;
}

bool greater(int x, int y) {
    return x > y;
}

bool smaller (int x, int y) {
    return x < y;
}

int main() {
    int a {10};
    int b {15};
    std::cout << std::boolalpha << validate(a, b, greater) << '\n';
    std::cout << std::boolalpha << validate(a, b, smaller);
    return 0;
}