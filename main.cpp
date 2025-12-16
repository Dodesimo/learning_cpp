#include <iostream>
#include <optional>
#include <string.h>

struct Test {
    int a;
    int b {}; //list initialization to 0 out?
    int c {3}; //default member initialization};
};

int main() {
    Test testStruct {};
    std::cout << testStruct.a << '\n';
    std::cout << testStruct.b << '\n';
    std::cout << testStruct.c << '\n';
    return 0;
}