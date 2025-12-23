#include <array>
#include <iostream>

namespace Color {
    enum Type {
        red,
        blue,
        white,
    };

    using namespace std::string_view_literals;
    constexpr std::array strings {"red"sv, "blue"sv, "white"sv};

}

constexpr std::string_view getString(Color::Type e) {
    return Color::strings[e];
}

int main() {
    Color::Type c {};
    std::cout << getString(c);
}
