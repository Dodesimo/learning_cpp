#include <array>
#include <iostream>
#include <cstring>

int func () {
    return 5;
}

int goo () {
    return 4;
}

int main() {
    int (*f)() {&func};
    f();
    return 0;
}