#include <iostream>
#include <string.h>

void printString (std::string& s) {
    std::cout << s << '\n';
}

int main() {
    std::string a {"testing"};
    printString(a); //so rather than make a copy of a as a parameter into print string, we create a reference of it (serves as an alias)
}