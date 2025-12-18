#include <iostream>
#include <string.h>

class Foo {
    int x {};
    int y {};
public:
    Foo() {
        std::cout << "default constructor, takes no parameters";
    }
    Foo(int x, int y):
    x {x},
    y {x}
    {
        std::cout << "initialize with variables";
    }
    Foo(int x = 2, int y = 2) {
        std::cout << "default arguments provided";
    }
};

int main() {
    return 0;
}