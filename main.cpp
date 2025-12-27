#include <array>
#include <iostream>

class Cents {
    int mCents {};
public:
    Cents(int cents): mCents {cents}{}
//use a friend function to give access to internal of cents and overload the + operator
friend int operator+ (const Cents& c1, const Cents& c2);
int getCents() const {return mCents;}
};

//bceause this is a friend, don't need to do scope reoslution
int operator+(const Cents& c1, const Cents& c2){
    return c1.mCents + c2.mCents;
}

int main(int argc, char* argv []) {
    Cents c1 {2};
    Cents c2 {4};
    std::cout << c1 + c2;
}
