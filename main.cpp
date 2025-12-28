#include <array>
#include <iostream>

class Cents {
    int mCents {};
public:
    Cents(int cents): mCents {cents}{}
//use a friend function to give access to internal of cents and overload the + operator
int getCents() const {return mCents;}
};

//bceause this is a friend, don't need to do scope reoslution
int operator+(const Cents& c1, const Cents& c2){
    return c1.getCents() + c2.getCents();
}

int main(int argc, char* argv []) {
    Cents c1 {2};
    Cents c2 {4};
    Cents c3 {c1 + c2};
    std::cout << c3.getCents();
}
