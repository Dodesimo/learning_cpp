#include <iostream>

void printArray(const int* arrayPointer) {
    for (auto i {0}; i < 4; ++i) {
        std::cout << arrayPointer[i];
    }
}

int main() {
    const int arr[] {2, 4, 1, 2};
    const int arr_two[] {23, 34, 3423, 32423, 1212, 232};
    printArray(arr);
    printArray(arr_two);
    return 0;
}