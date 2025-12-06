#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include "check.h"

void printString(std::string_view s) {

    std::cout << s;

}


int main() {
    std::string a {"testing"};
    std::string_view b {a};
    printString(b);
}