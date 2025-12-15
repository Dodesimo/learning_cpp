#include <iostream>
#include <string.h>

const int& factoryID() {
    static int id {};
    ++id;
    return id;
}

int main() {
    int& firstId {factoryID()}; //makes a copy
    int& secondId {factoryID()}; //makes a copy
    std::cout << firstId << '\n' << secondId;
}