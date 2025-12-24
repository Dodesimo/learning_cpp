#include <array>
#include <iostream>
#include <cstring>

int main() {
    int* ptr {new int {5}}; // dynamic memory request;
    std::cout << *ptr;
    delete ptr; //return memory back to the system
    ptr = nullptr; //set the ptr to a default value
}