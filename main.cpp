#include <iostream>

class Test {
    static inline int a {4};
public:
    static int getA() {
        return a;
    }
};

int main() {
    std::cout << Test::getA();
}