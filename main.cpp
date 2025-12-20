#include <iostream>

class Accumulator {
    int acc {};
public:
    Accumulator(){}
    void add(int x){acc += x;}
    friend void display(const Accumulator& a);
};

void display(const Accumulator &a) {
    std::cout << "external function value of a is " << a.acc;
}

int main() {
    Accumulator a {};
    display(a);
    return 0;
}