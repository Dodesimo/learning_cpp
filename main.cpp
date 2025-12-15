#include <iostream>
#include <string.h>

int main() {
    int* ptr {nullptr};
    int a {4};
    if (ptr == nullptr) {
        std::cout << "this pointer is null";
    }
    if (&a == nullptr) {
        std::cout << "a's reference is not a null pointer";
    }
}