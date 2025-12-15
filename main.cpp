#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>
#include "foo.h"

int main() {
    int x {5};
    const int& ref {x};
    std::cout << ref << '\n';
    x = 2;
    std::cout << x << '\n';
}