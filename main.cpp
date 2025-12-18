#include <iostream>

class Foo {
    int a {};
    int b {};
public:
    Foo(int x, int y) : a {x}, b {y} {
        std::cout << "initialized foo object";
    }
    void print() {
        std::cout << a << " " << b;
    }
};

int main() {

    Foo a = {2, 3};
    a.print();
    return 0;
}