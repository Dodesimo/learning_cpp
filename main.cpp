#include <array>
#include <iostream>
#include <cstring>

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    auto target {std::find(std::begin(arr), std::end(arr), 8)};
    if (target == arr.end()) {
        std::cout << "not found";
    } else {
        std::cout << *target; //dereference
    }
}