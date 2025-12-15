#include <iostream>
#include <string.h>

void printDouble(double d) {
    std::cout << d << '\n';
}

void printDoubleReference(const double& d) {
    std::cout << d << '\n';
}

int main() {
    double d {2.0};
    printDouble(d); //gets copied into here
    printDoubleReference(d); //pass in by reference, so the parameter is an alias for d
}