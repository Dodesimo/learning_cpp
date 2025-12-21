#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> stack {}; //can't use ctad because we don't want to initialize this yet
    stack.reserve(4);
    std::cout << "capacity: " << stack.capacity() << " ";
    std::cout << "length: " << stack.size();
    std::cout << "\n";
    stack.push_back(5);
    std::cout << "capacity: " << stack.capacity() << " ";
    std::cout << "length: " << stack.size();
    std::cout << "\n";

}