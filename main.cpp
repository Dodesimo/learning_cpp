#include <iostream>
#include <optional>
#include <string.h>

class Person {
    std::string name {};
public:
    void knows (const Person& p) {
        std::cout << name << " knows " << p.name;
    }

    void setName (std::string_view n) {
        name = n;
    }
};


int main() {
    Person a;
    Person b;
    a.setName("Devam");
    b.setName("Devam2");
    a.knows(b);
    return 0;
}