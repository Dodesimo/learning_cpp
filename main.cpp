#include <array>
#include <iostream>

struct House {
    int number {};
    int stories {};
    int roomsPerStory {};
};

int main() {
    constexpr std::array h {

        House {2, 5, 4},
        House {4, 2, 1},
        House {58, 2, 1}

    };
}