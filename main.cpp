#include <iostream>
#include <optional>
#include <string.h>

struct Employee {
    int age {2};
    double salary {75000.11};
};

void printEmployee(Employee& e) {
    std::cout << e.age << '\n';
    std::cout << e.salary << '\n';
}

int main() {
    Employee a {.age = 3, .salary = 5};
    printEmployee(a);
    return 0;
}