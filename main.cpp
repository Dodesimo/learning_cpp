#include <iostream>
#include <random>
#include <chrono>
#include <limits>

int main() {
    std::cout << "enter a single number";
    double a {};
    std::cin >> a;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    //flush the buffer of all remaining max possible characters up to and including an empty character.
}