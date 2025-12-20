#include <iostream>

class Calculator {
    int acc {};
public:
    //constructors and functions are declared
    Calculator();
    Calculator& add(int x);
    Calculator& subtract(int x);
    int getValue() const {return acc;}
    void reset() {*this = {};}
};

//definition of constructor
Calculator::Calculator(){}

//definition
Calculator& Calculator::add(int x)
{
    acc += x;
    return *this;
}

Calculator& Calculator::subtract(int x)
{
    acc -= x;
    return *this;
}

int main() {
    Calculator c {};
    c.add(2).multiply(3).add(5).multiply(2);
    std::cout << c.getValue();
}