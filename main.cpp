#include <iostream>

class Calculator {
    int acc {};
public:
    Calculator* add(int x) {
        acc += x;
        return this;
    }
    Calculator* subtract(int x) {
        acc -= x;
        return this;
    }
    Calculator* multiply(int x) {
        acc *= x;
        return this;
    }
    Calculator* division(int x) {
        acc /= x;
        return this;
    }
    int getValue() const {return acc;}
};

int main() {
    Calculator c {};
    c.add(2)->multiply(3)->add(5)->multiply(2);
    std::cout << c.getValue();
}