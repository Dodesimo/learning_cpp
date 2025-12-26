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
    std::cout << reinterpret_cast<void*>(f) << '\n';
    f = &goo;
    std::cout << reinterpret_cast<void*>(f) << '\n';
    return 0;
}