#include <iostream>
//friending member functions
class A;
class B {
    int value {};
public:
    B (int x):
    value {x} {}
    int getAValue(const A& a); //forward declaration of A-related method, works because the parameter is forward declared
};

class A {
    int value {};
public:
    A (int x): value {x} {}
    friend int B::getAValue(const A& a); //use scope resolution for correct friend method, meaning something else can call it with full access to a internals
};

int B::getAValue(const A& a) {
    return a.value;
}

int main() {
    return 0;
}