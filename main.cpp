#include <array>
#include <iostream>

template <typename T>
class SmartPointer{
    T* internalPointer {};
public:
    SmartPointer(T* pointer = nullptr): internalPointer {pointer} {};
    ~SmartPointer() {delete internalPointer;}
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