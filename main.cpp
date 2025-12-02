#include <iomanip>
#include <iostream>
#include "add.h"

int main() {

    bool b {};
    std::cout << "Enter a boolean value: ";
    std::cin >> std::boolalpha;
    std::cin >> b;
    std::cout << "Boolean value: " << b;

}