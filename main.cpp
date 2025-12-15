#include <iostream>
#include <string.h>

void nullify (int*& p) {
    p = nullptr;
}
int main() {
    int a {5};
    int* aRef {&a};
    std::cout << aRef << '\n';
    nullify(aRef);
    std::cout << aRef;
}