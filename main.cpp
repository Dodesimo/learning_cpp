#include <iostream>
#include <string.h>

int main() {
    double d {2.0};
    double* pointerD {&d};
    std::cout << *pointerD << '\n';

    double a {3.0};
    pointerD = &a;
    std::cout << *pointerD << '\n';
}