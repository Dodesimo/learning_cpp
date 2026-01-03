#include <iostream>

class ArrayOutOfBoundsException {
    std::string message {};
public:
    ArrayOutOfBoundsException(std::string_view m): message {m} {}
    std::string_view getMessage() const {return message;}
};

class Array {
    int array[3] {};
public:
    Array() {}
    void insert(int index, int value){
        if (index < 0 || index > 2) {
            throw ArrayOutOfBoundsException{"Out of bounds!"};
        }
    }
};

int main() {
    Array a {};
    try {
        a.insert(5, 3); //this will obviously fail
    } catch (const ArrayOutOfBoundsException& a){
        std::cerr << a.getMessage();
    }
    return 0;
}

