#include <iostream>
#include <string.h>

int main() {
    int a {2};
    int* const a_ref {&a};
    a_ref = nullptr;
}