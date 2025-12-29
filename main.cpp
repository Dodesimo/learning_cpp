#include <array>
#include <iostream>
#include <algorithm>

template <typename T>
void swap(T& a, T& b){
    T temp {a};
    a = b;
    b = temp;
}

int main() {
    std::string x {"abc"};
    std::string y {"efg"};
    
    std::cout << "before swap" << '\n';
    std::cout << x << ' ' << y;
    swap(x, y);
    std::cout << "after" << '\n';
    std::cout << x << ' ' << y;
    return 0;
}