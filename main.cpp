#include <iostream>
#include <string.h>

class Foo {
    int x {};
    int y {};
public:
    Foo() {
        std::cout << "Testing";
    }
    Foo(int x_param, int y_param)
    : x {x_param}
    , y {y_param} {
        Foo();
    }
};

int main() {
    Foo f {}; //constructor chaining
}