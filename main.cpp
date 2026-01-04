#include <iostream>
#include <iomanip>

int main() {
    char buf[10] {}; //ten character array
    std::cin >> std::setw(10) >> buf;
    return 0;
}