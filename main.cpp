#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>


void printInt(int x) {
    std::cout << x;
}

int main() {
    printInt(false); //we can convert a bool to an integer through integral numerical promotion
    return 0;
}