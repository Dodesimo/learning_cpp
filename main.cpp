#include <iostream>
#include <optional>
#include <string.h>

namespace Color {
    enum Color : std::int8_t { //this is essentially saying each enumerator is defined as an 8 bit integer
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
    Emotion::Emotion a {static_cast<Emotion::Emotion>(1)};
    std::cout << a << '\n';
}