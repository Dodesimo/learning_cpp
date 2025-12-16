#include <iostream>
#include <optional>
#include <string.h>

std::optional<double> divide (int a, int b) {
    if (b == 0) {
        return {};
    }

    return static_cast<float>(a)/b;
}

int main() {
    std::optional<double> a {divide(5, 0)};
    if (a.has_value()) {
        std::cout << a.value() << '\n';
    } else {
        std::cout << "error";
    }
}