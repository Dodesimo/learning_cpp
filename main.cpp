#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>


void printDouble(double d) {
    std::cout << d;
}

int main() {
    printDouble(5.0);
    pritnDouble(4.0f); //floating point numerical conversion
    return 0;
}