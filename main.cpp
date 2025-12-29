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
    auto resourcePointer {std::make_unique<Resource>()}; //pass in class name as a template argument.
    if (resourcePointer){
        std::cout << *resourcePointer << '\n';
    }
    
    return 0;
}