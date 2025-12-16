#include <iostream>
#include <optional>
#include <string.h>

enum Color {
    red,
    blue,
    yellow,
};

std::string_view getString(Color c) {
    switch (c) {
        case red:
            return "red";
        case blue:
            return "blue";
        case yellow:
            return "yellow";
        default:
            return "Color does not exist";
    }
}

int main() {
    Color c {red};
    std::cout << getString(c) << '\n';
}