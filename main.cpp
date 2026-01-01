#include <iostream>

class Base {
protected:
    int value {};
public:
    Base(int value): value {value} {}
    std::string_view getName() const {return "Base";}
    int getValue() const {return value;}
};

class Derived: public Base{
public:
    Derived (int value): Base {value} {}
    std::string_view getName() const {return "Derived";}
    int getValueDoubled() const {return value * 2;}
};

int main() {
    Derived d {5};
    Derived* dPoint {&d};
    std::cout << "value: " << dPoint->getValue() << '\n';
    return 0;
}