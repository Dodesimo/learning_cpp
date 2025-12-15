#include <iostream>
#include <string.h>

void printNumber (const int * i = nullptr) {
    if (i) {
        std::cout << *i << '\n';
    } else {
        std::cout << "nothing was passed in";
    }
}
int main() {
    int a {5};
    printNumber(&a);
    int* aNull {};
    printNumber(aNull);
}