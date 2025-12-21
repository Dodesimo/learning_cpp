#include <iostream>
#include <vector>
//friending member functions

int main() {
    std::vector col {"data", "test", "oof"}; //ctad string
    for (const std::string& s: col) {
        std::cout << s << "\n";
    }
    return 0;
}