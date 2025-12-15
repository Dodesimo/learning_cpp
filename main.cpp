#include <iostream>
#include <string.h>

int main() {
    int a {1};
    int& refA {a};
    int* pointA {&a};

    std::cout << a;
    std::cout << refA;
    std::cout << *pointA << '\n';

    refA = 2;

    std::cout << a;
    std::cout << refA;
    std::cout << *pointA << '\n';

    *pointA = 3;

    std::cout << a;
    std::cout << refA;
    std::cout << *pointA << '\n';

}