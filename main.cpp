#include <iostream>
#include <optional>
#include <string.h>

struct Fraction {
    int numerator {};
    int denominator {};
};

Fraction multiply (Fraction& a, Fraction&b) {
    return Fraction{a.numerator * b.numerator, a.denominator * b.denominator};
}

int main() {
    Fraction a {};
    Fraction b {};

    std::cout << "Enter a value for the numerator: ";
    std::cin >> a.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> a.denominator;
    std::cout << "";
    std::cout << "Enter a value for the numerator: ";
    std::cin >> b.numerator;
    std::cout << "Enter a value for the denominator: ";
    std::cin >> b.denominator;

    Fraction c {multiply(a, b)};
    std::cout << "Your fractions multiplied together: " << c.numerator << '/' << c.denominator;

    return 0;
}