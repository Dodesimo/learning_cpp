#include <array>
#include <iostream>

class Digit {
    int digit {};
public:
    Digit (int x): digit {x} {}
    //overload ++ and -- and then return reference to existing obejct because they modified in place
    Digit& operator++ ();
    Digit& operator-- ();
    int getDigit() const {return digit;}
};

Digit& Digit::operator++ (){
    if (digit == 9) {digit = 0;} else {
    ++digit;
    }
    return *this;
}

Digit& Digit::operator-- (){
    if (digit == 0) {digit = 9;} else {
    --digit;
    }
    return *this; //dereference implicit this pointer, and then return a reference to this.
}

int main() {
    Digit d {9};
    ++d;
    --d;
    std::cout << d.getDigit();
}