#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include "check.h"

void printString(std::string_view s) {

    std::cout << s;

}


int main() {
    std::string_view a {"testing"};
    std::cout << static_cast<std::string>(a);
}