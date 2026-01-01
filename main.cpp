#include <iostream>

class Base {
public:
    virtual int getValue() const = 0; //pure virtual function
};

int Base::getValue() const {
    return 5;
}

class A : public Base {
public:
    virtual int getValue () const override {
        return Base::getValue();
    }
};

int main() {
    A a {};
    Base& b {a};
    std::cout << b.getValue(); //will resolve to class A's
    return 0;
}