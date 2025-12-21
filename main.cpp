#include <iostream>
//friending member functions
class Employee {
    std::string name {};
public:
    Employee(std::string_view name):
    name {name}{}
    const std::string& getName() const & { //this tells us to call this version of function when called on an l value (makes sense, we want to return by reference and prevent a dangling reference)
        return name;
    }
    const std::string getName() const && { //this tells us to call this version of the function when called on an r value (makes sense, we don't want to return a reference bcause it could dangle)
        return name;
    }
};
int main() {
    return 0;
}