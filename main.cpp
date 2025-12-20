#include <iostream>

class Accumulator {
    int acc {};
public:
    Accumulator(){}
    void add(int x){acc += x;}
    friend void display(const Accumulator& a) {
        std::cout << "Value of A:" << a.acc;
    }
};

int main() {
    Accumulator a {};
    display(a);
    return 0;
}