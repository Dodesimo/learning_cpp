#include <iostream>
#include <string.h>

class Foo {
    int x {};
    int y {};
public:
    Foo(int x_param, int y_param)
    : x {x_param}
    , y {y_param}
    {}

    Foo() = default;
};

int main() {
    Foo f {}; //implcit default constructor
}