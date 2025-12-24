#include <iostream>

int main() {
    int a {2};
    int* a_pointer {&a};
    std::cout << a_pointer << '\n';
    std::cout << a_pointer + 1 << '\n';
    std::cout << a_pointer + 2 << '\n';
    std::cout << a_pointer + 3 << '\n';
    return 0;
}