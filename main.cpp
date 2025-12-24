#include <array>
#include <iostream>
#include <cstring>

int main() {
    int** array {new int*[10]}; //this is a pointer to a pointer because arrays decay into a pointer to their first element.
    for (auto i {0}; i < 10; ++i) {
        array[i] = new int[5]{}; //value initalize each of the elements,
    }
    array[2][1] = 4;
    std::cout << array[2][1];

    for (auto i {0}; i < 10; ++i) {
        delete[] array[i];
    }

    delete[] array;
    return 0;
}