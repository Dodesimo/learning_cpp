#include <iostream>
#include <vector>
//friending member functions

template <typename T>
void passByReference(std::vector<T>& vect) {
    std::cout << vect[0];
}

int main() {
    std::vector a {1, 2, 3}; //ctad infers this is a vector with template argument of int
    std::vector b {1.1, 2.2, 3.3}; //ctad infers this is a vector wtih template argument of double
    passByReference(a);
    passByReference(b);
    return 0;
}