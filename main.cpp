#include <iostream>
#include <string.h>

int main() {
    double d {2.0};
    double* pointerD {&d};

    std::cout << &d << '\n';
    std::cout << *pointerD << '\n';
}