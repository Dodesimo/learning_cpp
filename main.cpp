#include <iostream>
#include <string.h>

int main() {
    int* ptr {nullptr};
    int a {4};
    ptr = &a;
    std::cout << *ptr << '\n';
}