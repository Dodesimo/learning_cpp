#include <iostream>

class A {
public:
    int p {1};
protected:
    int p2 {1};
private:
    int p3 {1};
};

class B : public A { //public inheriitance
    B() {
        p = 2; //valid because P is public
        p2 = 1; //valid because P2 is protected (friends and derived can modify)
        p3 = 2; //not possble because p3 is private
    }
};