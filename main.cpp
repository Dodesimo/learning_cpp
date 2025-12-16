#include <iostream>
#include <optional>
#include <string.h>

struct Employee {
    int age {};
    double wage {78.000}; //this is a default member initializer
};

std::ostream& operator<< (std::ostream& o, Employee& e) {
    o << e.age << '\n' << e.wage;
    return o;
}

int main() {
    Employee e {2, 484.19};
    std::cout << e;
}