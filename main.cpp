#include <array>
#include <iostream>

class Cents {
    int cents {};
public:
    Cents(int x): cents {x} {}
    Cents operator+ (const Cents& other);
};

Cents Cents::operator+ (const Cents& other){
    return Cents {cents + other.cents};
}

int main(int argc, char* argv []) {
   return 0;
}
