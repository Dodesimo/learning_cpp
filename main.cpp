#include <iostream>

void incrementPrint() {

    static int a {1};
    ++a;
    std::cout << a;

}

int main() {
    incrementPrint();
    incrementPrint();
    incrementPrint();
    return 0;
}