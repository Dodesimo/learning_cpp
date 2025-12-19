#include <iostream>

class Single {
    int a {};
public:
    constexpr Single(int x):
    a {x} {
    }
    constexpr int getA() const {return a;}
};

constexpr int returnSingle(const Single& s) {
    return s.getA();
}

int main() {
    constexpr Single s {2};
    constexpr int a {returnSingle(s)};
    std::cout << a;
}