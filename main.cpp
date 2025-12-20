#include <iostream>

class IdGenerator {
    static inline int id {0};
public:
    static void incrementId();
    static int getId(){return id;}
};

void IdGenerator::incrementId() {
    ++id;
}

int main() {
    IdGenerator::incrementId();
    std::cout << IdGenerator::getId() << '\n';
    IdGenerator::incrementId();
    IdGenerator::incrementId();
    std::cout << IdGenerator::getId();
    return 0;
}