#include <iostream>
#include <optional>
#include <string.h>
struct Employee {
    int age {2};
    double wage {100.00};
};

int main() {
    Employee e {};
    Employee* ePointer {&e};
    std::cout << ePointer -> wage;

    return 0;
}