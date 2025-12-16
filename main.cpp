#include <iostream>
#include <optional>
#include <string.h>

namespace Color {
    enum Color {
        red,
        blue,
        white,
    };
}

namespace Emotion {
    enum Emotion {
        red, //prevents naming collision through namespace definition
        blue, //prevents naming collision through namespace definition
        yellow,
    };
}

int main() {
    Color::Color a {Color::red};
    Color::Color b {Color::red};
    Color::Color c {Color::red};
    Emotion::Emotion d {Emotion::blue};
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
}