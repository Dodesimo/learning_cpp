#include <iostream>

int doubleNumber (int x) {
    return x * 2;
}

int main() {
    int n {};
    std::cin >> n;
    
    try {
        if (n < 0) {
            throw "fade";
        }
    } catch (...)  {
        std::cerr << "negative number!";
    } //catch all exception handler

    return 0;
}