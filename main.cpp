#include <iomanip>
#include <iostream>
#include "check.h"

int main() {
    int8_t character {};
    std::cout << "Enter a single character. ";
    std::cin >> character;
    std::cout << "You entered " << character << " , " << "which has an ASCII code of " << static_cast<int>(character);
}