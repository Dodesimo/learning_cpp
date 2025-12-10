#include <iostream>
#include <string.h>

int main() {

    int a {};
    do {

        std::cout << "Enter a number: ";
        std::cin >> a;

    } while (a % 2 == 1);
}