#include <iostream>
#include <string.h>

class IntPair {
    int a {};
    int b {};
public:
    IntPair(int x, int y):
    a {x},
    b {y} {
    }

    int getA() const {return a;}
    int getB() const {return b;}
};

void print(IntPair p)
{
    std::cout << "(" << p.getA() << ", " << p.getB() << ")\n";
}


int main() {
    print(IntPair{2, 3});
}