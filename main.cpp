#include <iostream>

class Base {
public:
    Base() {}
    int getNumber() {return 2.0;}
    virtual ~Base() {}
};

class Derived : public Base {
public:
    Derived() {};
    double getDouble() {return 21.0;}
};

int main() {
    Derived d {};
    Base* b {&d};
    std::cout << (dynamic_cast<Derived*>(b))->getDouble();
}