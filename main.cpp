#include <array>
#include <iostream>

int main() {
    int x {2};
    int& xRef {x}; //lvalue reference binding
    int&& xRValueRef {4}; //rvalue reference
    return 0;
}