#include <array>
#include <iostream>
#include <algorithm>

template <typename T>
class Array {
    T* pointer {};
    int length {};
public:
    Array(int l): length {l} {
        pointer = new T[l]; 
    }
    //destructor
    ~Array () {
        delete[] pointer; //because its an array block
    }
    //copy constructor
    Array(const Array& other){
        length = other.length;
        pointer = new T[other.length];
        std::copy_n(other.pointer, other.length, pointer); //copy over elements from other to pointer. 
    }
    //copy assignment
    Array& operator= (const Array& other){
        //self assignment check
        if (this == &other) {
            return *this;
        }

        delete[] pointer; //clear whatever is on the left handside. 
        pointer = new T[other.length];
        std::copy_n(other.pointer, other.length, pointer); 
        length = other.length;
        return *this;
    }
    //move constructor
    Array(Array&& other) noexcept: pointer {other.pointer}, length {other.length} { //need to add a noexcept
        //we can just move whatever contents there are in the r value to the l because the r value is temporary.
        //no need to a do a deep copy.
        other.length = 0;   
        other.pointer = nullptr;
    }
    //move assingment
    Array& operator=(Array&& other) noexcept {
        if (this == &other){
            return *this;
        }
        delete[] pointer;
        pointer = other.pointer;
        length = other.length;
        other.length = 0;
        other.pointer = nullptr;
        return *this;
    }
};

int main() {
    Array<int> a {5};
    return 0;
}