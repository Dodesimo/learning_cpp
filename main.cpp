#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>
#include "foo.h"

int main() {
    int x {5};
    int& ref {x}; //x is a lvalue, we created a lvalue reference variable (alias)
    std::cout << x << '\n';
    std::cout << ref << '\n';

}