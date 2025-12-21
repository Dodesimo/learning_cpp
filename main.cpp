#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector v {0, 1, 2, 3};
    for (const int& i: v){std::cout << i;}
    v.resize(5);
    std::cout << '\n';
    for (const int& i :v){std::cout << i;}
    return 0;
}