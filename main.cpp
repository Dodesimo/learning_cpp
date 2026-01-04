#include <iostream>
#include <iomanip>
#include <sstream>

int main() {
    std::stringstream os {};
    os << "test"; //put in
    os.str("testing more"); //put string literal in
    std::string first {};
    std::string second {};
    os >> first;
    os >> second;
    std::cout << first << '\n';
    std::cout << second << '\n';
}