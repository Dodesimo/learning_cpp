#include <iostream>
#include <print>
#include <string>
#include "check.h"

int main() {
    std::cout << "Get an entire line of text with white space";
    std::string a {};
    std::getline(std::cin >> std::ws, a);
    std::cout << a;
}