#include <array>
#include <iostream>
#include <cstring>

class IntArrayWrapper {
    int* arrayPointer{};
    int arrayLength{};
public:
     IntArrayWrapper(int size) {
         arrayLength = size;
         arrayPointer = new int[static_cast<std::size_t>(arrayLength)]{};
    }
    ~IntArrayWrapper() {
         delete[] arrayPointer;
     }
    int getValue(int index){return *(arrayPointer + index);}
    void setValue(int index, int value){*(arrayPointer + index) = value;}
};

int main() {
    IntArrayWrapper i {10};
    std::cout << i.getValue(0) << '\n';
    i.setValue(0, 232);
    std::cout << i.getValue(0);
}