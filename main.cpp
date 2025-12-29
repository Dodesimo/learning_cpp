#include <array>
#include <iostream>

template <typename T>
class SmartPointer{
    T* internalPointer {};
public:
    SmartPointer(T* pointer = nullptr): internalPointer {pointer} {};
    SmartPointer(const SmartPointer& other){
        internalPointer = other.internalPointer; //ddon't need to delete the internalPointer because we are initializeing a new object
        other.internalPointer = nullptr; //implement move semantics, move the internal pointer over to the present one. 
    }
    ~SmartPointer() {delete internalPointer;}
    SmartPointer& operator=(SmartPointer s other){
        delete internalPointer; //beacuse we do'nt know what data is already there. 
        internalPointer = other.internalPointer;
        other.internalPointer = nullptr;
    }
    SmartPointer& operator= (SmartPointer s){
        if (this == &s){
            return *this; //just return the current element.
        }

    }
    //overload the dereference operator
    T operator*() const {
        return *internalPointer;
    }
    //overload arrow operator
    T& operator->() const {
        return internalPointer;
    }
};

class Resource {
    public:
    Resource() {std::cout << "Resource allocated.";}
    ~Resource() {std::cout << "Resource deallocated.";}
};

int main() {
    SmartPointer<Resource> sp {new Resource{}}; //allocate Resource in the Heap, and then pass the pointer into the smart pointer.
    return 0;
}