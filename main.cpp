#include <array>
#include <iostream>

class Fraction {
    int n {};
    int d {};
public:
    Fraction(int x, int y): n {x}, d {y} {}
    Fraction (const Fraction& f) {n = f.n; d = f.d;} //this is a copy constructor, if we do = default will by default do a value initalization
    //overload the copy assignment
    Fraction& operator= (const Fraction& f) {
       n = f.n;
       d = f.d; 
       return *this;
    }
    //overload the extraction operator
    friend std::ostream& operator<< (std::ostream& s, const Fraction& f);
};

std::ostream& operator<< (std::ostream& s, const Fraction& f){
    s << f.n << " " << f.d << '\n';
    return s;
}

int main() {
    Fraction f {1, 2};
    std::cout << f;
    Fraction d {f}; //copy constrtuctor invoked
    std::cout << d;
    Fraction e  = f; //copy assigmnent used
    std::cout << e;
    return 0;
}