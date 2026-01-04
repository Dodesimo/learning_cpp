#include <iostream>
#include <stdexcept>

class Fraction {
    int numerator {};
    int denominator{};

public:
    Fraction(int n, int d): numerator {n}, denominator {d} {
        if (denominator == 0) {
            throw std::runtime_error("Denominator cannot be 0");
        }
    }

    void print() {std::cout << numerator << '/' << denominator;}
};

int main() {
    std::cout << "Enter the numerator: ";
    int n {};
    std::cin >> n;

    std::cout << "Enter the denominator: ";
    int d {};
    std::cin >> d;
    
    try {
        Fraction f {n, d};
        f.print();
    } catch (const std::runtime_error& r) {
        std::cout << "invalid denominator";
    }

}