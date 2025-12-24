#include <iostream>
#include <cstring>

int main() {
    //iterating a C-style array through pointer arithmetic.
    char str[] {"string"};
    str[0] = 'a';
    std::cout << std::strlen(str);
    return 0;
}