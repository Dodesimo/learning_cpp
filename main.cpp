#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::array<int, 5> a {}; //array declaration
    std::cout << a[0] << '\n';
    std::array<int, 5> b; //elements are not defaulted out
    std::cout << b[0];
}