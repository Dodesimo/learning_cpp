#include <iostream>
#include <optional>
#include <string.h>

int main() {

    struct Employee {
        int age {};
        double wage {};
    };

    Employee a {};
    a.age = 20;
    a.wage = 3.0;

    std::cout << a.age << '\n' << a.wage;
}