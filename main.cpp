#include <iostream>
#include <random>
#include <chrono>
#include <limits>
#include <cassert>

int addNumbers (int x, int y) {
    return x + y;
}

//overloaded based on number of parameters
int addNumbers (int x, int y, int z) {
    return x + y + z;
}

//overloaded on type of parameters
int addNumbers (double x, double y){
    return x + y;
}

int main() {
    std::cout << addNumbers(2, 3) << addNumbers(2, 5, 3);
    return 0;
}