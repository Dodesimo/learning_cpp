#include <iomanip>
#include <iostream>
#include "check.h"

int main() {
    int a {};
    int b {};
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    std::cout << std::boolalpha;
    std::cout << "The two numbers are equal: " << isEqual(a, b);
}