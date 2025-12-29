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
    std::unique_ptr<Resource> up {new Resource{}}; //takes a template name
    std::unique_ptr<Resource> newUp {};

    newUp = std::move(up); 
    if (newUp){
        std::cout << *newUp;
    }
    return 0;
}