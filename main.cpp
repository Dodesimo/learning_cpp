#include <iostream>

class NumberWrapper {
    int a {};
public:
    NumberWrapper(int x = 0):
    a{x} {}
    int getA() const {return this->a;}
    void setA(int x) {a = x;}
};

int main() {
    NumberWrapper nw {3};
    std::cout << nw.getA();
    return 0;
}