#include <iostream>

template <typename T>
class GenericArray {
    T* array {};
    int length {};
public:
    GeneralArray(l): length {l} {
        assert(l > 0); //see if of size
        array = new T[length] {};
    }
    Array (const Array& other) = delete; //disable copy constructor
    Array& operator=(const Array& other) = delete; //disable copy assignment

    ~GeneralArray(){
        delete[] array;
    }

    void erase() {
        delete[] array;
        array = nullptr;
        length = 0;
    }

    int getLength() const {return length;}

    T& operator[] (int index) {
        return array[index];
    }
};