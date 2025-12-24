#include <array>
#include <iostream>
#include <cstring>

int main() {
    int a {5};
    void* aPointer {&a}; //so a void pointer containing the address of a.
    std::cout << *static_cast<int*>(aPointer); //before dereferencing, need to get it to the right type.
    return 0;
}