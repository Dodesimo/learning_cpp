#include <iostream>

class A {
    int member {};
public:
    A (int x): member {x} {

        if (x < 0) {
            throw 1;
        }

    };
};

class B : public A {
public:
    B (int x) : A {x} {}
};

int main () {
    try {
        A a {-5};
    } catch (int x) {
        std::cout << x;
    }
}