#include <iostream>

int main() {
    int arr[15]; // we have an array of 15 elements of int that are fill with garbage
    std::cout << arr[0];

    int second_arr[15]{}; //array of 15 elements that are value initialized with 0
    std::cout << second_arr[0];

    int third_arr[] {1, 2, 3}; //aggregate initialization via an initializer list, can ommit lenght
    return 0;
}