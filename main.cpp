#include <iostream>
#include <optional>
#include <string.h>

int main() {

    struct Employee {
        int age {};
        double wage {};
    };

    Employee a {2, 3.0};
    std::cout << a.age;
}