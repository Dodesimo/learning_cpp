#include <iostream>

class Single {
    int a {};
public:
    Single(int x):
    a {x} {
    }
    int getA() const{return a;}
};

void printSingle(const Single& s) {
    std::cout << s.getA();
}

int main() {
    printSingle(4);
}