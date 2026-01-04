#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    std::stringstream os {};
    os << "123231" << '\n';
    os << "129090321" << '\n';
    int a {};
    int b {};
    os >> a >> b;
    std::cout << a << '\n';
    std::cout << b;
}