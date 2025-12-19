#include <iostream>

class Fraction {
    int n {};
    int d {};
public:
    Fraction(int n_p = 0, int n_d = 1):
    n {n_p},
    d {n_d}
    {

    }
    //copy constructor
    Fraction(const Fraction& fraction):
    n {fraction.n},
    d {fraction.d}
    {
    }

    int getN() const {return n;}
    int getD () const {return d;}

};

void print(const Fraction& f) {
    std::cout << f.getN() << "/" << f.getD();
}

int main() {
    Fraction f {2, 3};
    Fraction copy {f};
    print(f);
}