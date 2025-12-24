#include <array>
#include <iostream>
#include <cstring>

int main() {
    int** array {new int*[10]}; //this is a pointer to a pointer because arrays decay into a pointer to their first element.
    delete[] array;
    return 0;
}