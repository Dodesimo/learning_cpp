#include <array>
#include <iostream>
#include <cstring>

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    auto start {std::begin(arr)}; //returns a Container::iterator or a Container::const_iterator
    auto end (std::end(arr)); //returns a Container::iterator or a Container::const_iterator
    for (auto s {start}; s != end; ++s){
        std::cout << *s << '\n'; //dereference iterator type
    }
}