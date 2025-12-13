#include <iostream>
#include <random>
#include <chrono>
#include <limits>


double divide(int x, int y) {

    if (y == 0) {
        std::cerr << "Invalid division by 0";
    }

    return static_cast<double>(x) / y;

}

int main() {
    return 0;
}