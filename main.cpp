#include <iostream>
#include <optional>
#include <string.h>

enum Color {
    red,
    blue,
    yellow,
};

std::string_view getStringFromColor(Color c) {
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

std::optional<Color> getColorFromString(std::string_view s) {
    if (s == "red") {
        return red;
    } else if (s == "blue") {
        return blue;
    } else if (s == "yellow"){
        return yellow;
    }

    return {};
}

std::ostream& operator<< (std::ostream& out, Color color) {
    return out << getStringFromColor(color);
}

std::istream& operator>> (std::istream& input, Color& color) {
    std::string s {};
    std::cin >> s;
    std::optional<Color> value {getColorFromString(s)};
    if (value) {
        color = *value;
        return input;
    }
    //if we don't get a match here, the input was invalid
    input.setstate(std::ios_base::failbit);
    return input;
}

int main() {
    Color c {red};
    std::cout << c << '\n';
}