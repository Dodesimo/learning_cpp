#include <iostream>

class Calculator {
    int acc {};
public:
    Calculator& add(int x) {
        acc += x;
        return *this; //dereference
    }
    Calculator& subtract(int x) {
        acc -= x;
        return *this; //dereference
    }
    Calculator& multiply(int x) {
        acc *= x;
        return *this; //dereference
    }
    Calculator& division(int x) {
        acc /= x;
        return *this; //dereference
    }
    int getValue() const {return acc;}

    void reset() {
        *this = {};
    }
};

int main() {
    Calculator c {};
    c.add(2).multiply(3).add(5).multiply(2);
    std::cout << c.getValue();
}