#include <array>
#include <iostream>
#include <cstring>

int main() {
    std::cout << "length of array";
    std::size_t length {};
    std::cin >> length;
    int* array { new int[length]{} }; //iniitalize an array of length length, value init every element.
    array[3] = 2;
    std::cout << array[3];
    delete[] array;
    return 0;
}