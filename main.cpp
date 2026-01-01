#include <iostream>

class Base {
public:
    virtual void printNumber() {std::cout << 2;}
};

class Derived : public Base {
public:
    virtual void printNumber() override {std::cout << 45;}
};

void execute(Base b){
    b.printNumber();
}

int main (){
    Derived d {};
    execute(d); //object slicing
}