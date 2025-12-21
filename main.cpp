#include <iostream>
#include <vector>
//friending member functions

int main() {
    std::vector vec {1, 2, 3, 5, 3}; //ctad
    std::cout << vec.at(0); //this will work
    std::cout << vec.at(15141); //this won't work because we will get a bounds check
    return 0;
}