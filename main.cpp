#include <array>
#include <iostream>

class Cents {
    int mCents {};
public:
    Cents(int cents): mCents {cents}{}
    int getCents() const {return mCents;}
};

//bceause this is a friend, don't need to do scope reoslution
int operator+(const Cents& c1, const Cents& c2){
    return c1.getCents() + c2.getCents();
}

std::ostream& operator<< (std::ostream& out, const Cents& c){
    std::cout << "The cents is: " << c.getCents();
    return out;
}


int main(int argc, char* argv []) {
    Cents c1 {2};
    Cents c2 {4};
    Cents c3 {c1 + c2};
    std::cout << c3;
}
