#include <string_view>
#include <iostream>

class Base {
public:
    std::string_view getName() const {return "Base";}
    virtual std::string_view getNameVirtual() const {return "Base";}
};

class Derived : public Base {
public:
    std::string_view getName() const {return "Derived";}
    virtual std::string_view getNameVirtual() const override {return "derived";}
};

int main() {
    Derived derived {};
    Base& base {derived};

    std::cout << "base has a static type " << base.getName() << '\n'; //should be base
    std::cout << "base has a dynamic type " << base.getNameVirtual() << '\n'; //should be derived

}