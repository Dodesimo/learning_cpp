#include <iostream>
#include <exception>

class Array {
    int array[3] {};
public:
    Array() {}
    void insert(int index, int value){
        if (index < 0 || index > 2) {
            throw std::runtime_error{"Out of bounds!"};
        }
    }
};

int main() {
    Array a {};
    try {
        a.insert(5, 3); //this will obviously fail
    } catch (const std::runtime_error& a){
        std::cerr << a.what();
    }
    return 0;
}

