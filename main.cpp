#include <iostream>
#include <print>
#include <string>
#include <string_view>
#include "check.h"

int main() {
    constexpr int a {2};
    constexpr int b {4};

    std::cout << a / b;
    std::cout << static_cast<float>(a) / b << '\n';
    std::cout << a / static_cast<float>(b) << '\n';
    std::cout << static_cast<float>(a) / static_cast<float>(b) << '\n';
}