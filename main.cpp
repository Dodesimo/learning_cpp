#include <iostream>
#include <string.h>

int main() {
    double d {2.0};
    std::cout << &d << '\n';
    std::cout << d << '\n';
    std::cout << *(&d) << '\n';
}