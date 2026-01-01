#include <iostream>

class Base {
public:
    void print(int a) {std::cout << "base int" << '\n';}
    void print(double a){std::cout << "base double" << '\n';}
};

class Derived : public Base {
public:
    using Base::print; //this makes all print functions from base eligible
    void print(double a) = delete;
};

int main() {
    Derived d {};
    static_cast<Base&>(d).print(2.0); //deleted function, can either static cast or Base:: scope specifier 
    return 0;
}