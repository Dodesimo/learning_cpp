#include <iostream>
#include <cassert>

class IntArray {
    int* backingArray {};
    int size {};
public:
    IntArray() {} //no initialization
    IntArray(int initSize): size {initSize}, backingArray {new int[initSize]{}} {} //value initialize array
    ~IntArray() {delete[] backingArray;} //destroy the array
    void erase() {
        size = 0;
        delete[] backingArray;
        backingArray = nullptr; //ensure we aren't pointing at deallocated memory.
    }
    int& operator[](int index){ //overload binary operator []
        assert(index > -1 && index < size);
        return backingArray[index];
    }
    int getLength() const {return size;}

    void reallocate(int newLength) {
        erase();
        backingArray = new int[newLength]{};
        size = newLength;

    }

    //copy constructor
    IntArray(const IntArray& a){
        size = a.size;
        std::copy_n(a.backingArray, size, backingArray);     
    }

    IntArray& operator= (const IntArray& other){
        erase();
        backingArray = new int[other.size]{};
        std::copy_n(other.backingArray, other.size, backingArray);
        size = other.size;
        return *this;
    }

    void resize(int newLength){
        int* newArray {new int[newLength]{}};
        std::copy_n(backingArray, size, newArray);
        erase();
        backingArray = newArray;
        size = newLength; //always assumes we resize to a larger array for simplicity
        //if new length was less than current size, we would just resize to a smaller array.    
    }

};