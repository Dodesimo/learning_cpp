#include <array>
#include <iostream>
#include <cstring>

int main() {
    int* arr {new int[5]{2, 3, 5, 3}}; //do direct initialization of a dynamic allocated array
    for (auto i {0}; i < 5; ++i) {
        std::cout << *(arr + i);
    }
    delete[] arr;
    return 0;
}