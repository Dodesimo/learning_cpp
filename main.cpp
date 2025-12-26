#include <array>
#include <iostream>
#include <cstring>

void print(int x) {
    std::cout << x;
}

void print(int x, int y = 10) {
    std::cout << x << '\n' << y;
}

int main() {
    void (*fn)(int) {print}; //we make it less ambiguious what we want to call
    fn(10);
    return 0;
}