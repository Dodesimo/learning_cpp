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
    void identify() const {std::cout << "derived" << '\n'; Base::identify();} //call base class.
};

int main () {
    Base b {5};
    Derived d {5};
    b.identify();
    d.identify();
    return 0;
}

