#include <iostream>

class A {
public:
    A() {std::cout << "Constructor for A" << '\n';}    
};

class B : virtual public A{
public:
    B() {std::cout << "Constructor for B" << '\n';}    
};

class C : virtual public A {
public:
    C() {std::cout << "Constructor for C" << '\n';}    
};

class D : public B, C {
public:
    D() {std::cout << "Constructor for D" << '\n';}    
};

int main () {
    D d {};
}