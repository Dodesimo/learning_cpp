#include <iostream>

class A {
public:
    A() {std::cout << "A constructor called" << '\n';}
};

class B : public A {
public:
    B() {std::cout << "B constructor called" << '\n';}
};

int main() {
    A a {};
    B b {};
    return 0;
}