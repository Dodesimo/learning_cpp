#include <iostream>

class Base {
public:
    Base() = default;
    virtual ~Base() {
        std::cout << "Base deletion";
    }
};

class Derived : public Base {
public:
    Derived() = default;
    ~Derived() override {
        std::cout << "derived deletion";
    }
};

int main() {
    Derived* d {new Derived()};
    Base* b {d};
    delete d;
    return 0;
}