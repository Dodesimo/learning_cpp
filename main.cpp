#include <array>
#include <iostream>
#include <algorithm>

class Teacher {
    std::string name;
public:
    Teacher(std::string_view s): name {s} {};
    const std::string_view getName() const {return name;}
};

class Department {
    const Teacher& t; //has a reference to teacher, doesn't actually own it?
public:
    Department(const Teacher& teacher): t {teacher}{}
};

int main() {
    Teacher t {"test"};
    {
        Department d {t}; //d doesn't own t
    }
    //t still exists
    std::cout << t.getName();
    return 0;
}