#include <iostream>

class Foo {
    int a {};
public:
    Foo(int x):
    a {x}
    {};
    ~Foo() {
        std::cout << "Constructor destroyed";
    }
};

int main() {
    Foo b {0};
    return 0;
}