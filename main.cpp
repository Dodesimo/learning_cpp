#include <iostream>
#include <optional>
#include <string.h>

enum Color {
    red,
    blue,
    white,
};
int main() {
    Color a {red};
    Color b {blue};
    Color c {white};
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
}