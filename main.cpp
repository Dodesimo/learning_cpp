#include <array>
#include <iostream>
#include <algorithm>

class Person {
    std::string name;
    std::weak_ptr<Person> partner; //prevent a cyclic dependency by creating 
    public:
        Person(const std::string& n): name {n} {std::cout << "Created " << n << '\n';}
        ~Person(){std::cout << "Destroyed " << name << '\n';} 
        friend bool partnerUp(const std::shared_ptr<Person>& personOne, const std::shared_ptr<Person>& personTwo){
            if (!personOne || !personTwo){return false;} //this means that one of them points to junk.
            personOne->partner = personTwo;
            personTwo->partner = personOne;
            std::cout << personOne->name << " is now partnered with " << personTwo->name << '\n';
		    return true;
        }
};

int main() {
    auto a {std::make_shared<Person>()};
    auto b {std::make_shared<Person>()};
    partnerUp(a, b);
    return 0;
}
