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

template <typename T>
void fetchResource(const std::unique_ptr<T> p){
    std::cout << "resource: " << *p << '\n';
}

int main() {
    auto resourcePointer {std::make_unique<Resource>()}; //pass in class name as a template argument.
    fetchResource (std::move(resourcePointer));
    return 0;
}