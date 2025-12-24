#include <iostream>

int main() {
    //iterating a C-style array through pointer arithmetic.
    char str[] {"string"};
    str[0] = 'a';
    std::cout << str;
    return 0;
}