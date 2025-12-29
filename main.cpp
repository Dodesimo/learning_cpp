#include <array>
#include <iostream>

void print (const int& a){
    std::cout << "print by l value reference" << '\n';
}

void print (int&& a) {
    std::cout << "print by r value reference" << '\n';
}

int main() {
    int x {2};
    print(x);
    print(5);
    return 0;
}