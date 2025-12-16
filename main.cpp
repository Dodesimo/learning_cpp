#include <iostream>
#include <optional>
#include <string.h>

int main() {

    struct Employee {
        int age {};
        double wage {78.000}; //this is a default member initializer
    };

    Employee a {2};
    std::cout << a.age;
}