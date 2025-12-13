#include <iostream>
#include <random>
#include <chrono>
#include <limits>

int main() {

    double a {};

    while (true) {
        std::cout << "enter a single number";
        std::cin >> a;

        if (std::cin.fail()) {

            if (std::cin.eof()) {
                std::exit(0); //if user enters an EOF character, we exit from the program
            }

            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        } else {
            break;
        }

    }

    std::cout << a;
}