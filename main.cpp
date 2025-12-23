#include <array>
#include <iostream>

namespace Color {
    enum Type {
        red,
        blue,
        white,
        MAX,
    };

    using namespace std::string_view_literals;
    constexpr std::array strings {"red"sv, "blue"sv, "white"sv};

}

constexpr std::string_view getString(Color::Type e) {
    return Color::strings[e];
}

std::ostream& operator<< (std::ostream& out, Color::Type c) {
    std::cout << getString(c);
    return out;
}

int main() {
    for (auto i {0}; i < Color::Type::MAX; ++i) {
        std::cout << static_cast<Color::Type>(i) << '\n';
    }
}
