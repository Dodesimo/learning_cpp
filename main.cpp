#include <iostream>
#include <string.h>

int main() {
    int a {2};
    int* aPointer {&a}; //normal pointer, you can change the address and you can change the value
    const int* aPointerValueConstant {&a}; //pointer to a constant integer, you can't change the value;
    int* const aPointerPointerConstant {&a}; //the actual pointer is constant.
}