#include <iostream>

class Base {
protected:
    int value {};
public:
    Base (int v): value {v}{}
    void identify() const {std::cout << "base!" << '\n';}
};

class Derived: public Base {
public:
    Derived(int v): Base(v) {}
    int getValue() const {return value;} //added feature
};

