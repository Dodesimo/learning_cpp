#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include "check.h"

int main() {
    std::string a {"apple"};
    std::string_view b {a};

    std::cout << b << '\n';
    b.remove_prefix(1);
    std::cout << b << '\n';
    b.remove_suffix(2);
    std::cout << b << '\n';
    b = static_cast<std::string_view>(a);
    std::cout << b << '\n';
}