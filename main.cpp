#include <iostream>
#include <vector>
//friending member functions

int main() {
    std::vector vec {1, 2, 3, 5, 3}; //ctad
    std::cout << typeid(std::size(vec)).name();
    return 0;
}