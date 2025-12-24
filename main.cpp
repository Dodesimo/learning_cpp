#include <array>
#include <iostream>
#include <cstring>

int main() {
    int v {5};
    int* vPointer {&v};
    int** vPointerPointer {&vPointer};
    std::cout << *vPointer;
    std::cout << **vPointerPointer;
}