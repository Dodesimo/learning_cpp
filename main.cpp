#include <array>
#include <iostream>
#include <algorithm>

class Resource {
    int a {2};
public:
    Resource() {std::cout << "Allocated resource" << '\n';}
    ~Resource() {std::cout << "deleted resource" << '\n';}
    friend std::ostream& operator<< (std::ostream& s, const Resource& r){
        std::cout << r.a;
        return s;
    }
};

int main() {
    Resource* rPointer {new Resource()}; //put on the heap
    std::shared_ptr<Resource> sp {rPointer};
    {
        std::cout << "nested made" << '\n'
        std::shared_ptr<Resource> nested {sp};
    }
}