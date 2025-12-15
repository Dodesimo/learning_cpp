#include <iostream>
#include <string.h>

void printString(std::string s) {
    std::cout << s << '\n'; //this is expensive because we are doing a direct copy for the parameter
}

void printStringRef(const std::string& s) {
    std::cout << s << '\n'; //what gets passed in becomes a reference alias.
}

void printStringPoint(std::string* s) {
    std::cout << *s << '\n'; //pass in an address and dereference
}

int main() {
    std::string a {"testing!"};
    printString(a);
    printStringRef(a);
    printStringPoint(&a);
}