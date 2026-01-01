#include <iostream>

class Base {
public:
    void print(int a) {std::cout << "base int" << '\n';}
    void print(double a){std::cout << "base double" << '\n';}
};

class Derived : public Base {
    using Base::print; //this makes all print functions from base eligible
public:
    void print(double a) {std::cout << "derived double";}
};

int main() {
    Derived d {};
    d.print(2); //incorrectly resolves to Derived::double, we want to use Base::int
    return 0;
}