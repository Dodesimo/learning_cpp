#include <iostream>

int main() {
    //iterating a C-style array through pointer arithmetic.
    const int array[] {2, 3, 4, 5, 6};
    const int* start = &array[0];
    const int* end = start + std::size(array);
    while (start < end) {
        std::cout << *start <<'\n';
        ++start;
    }
}