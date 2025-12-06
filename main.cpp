#include <iomanip>
#include <iostream>
#include "check.h"

int main() {
    float a {12.1232123};
    int b {static_cast<int>(a)};
    std::cout << a;
    std::cout << '\n';
    std::cout << b;
}