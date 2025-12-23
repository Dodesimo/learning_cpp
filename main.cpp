#include <array>
#include <iostream>

struct House {
    int number {};
    int stories {};
    int roomsPerStory {};
};

int main() {

    constexpr std::array h {
                    House {2, 5, 3},
                    House {4, 6, 1},
                    House {122, 1, 2}
                };
     //here we provide template arguments, but each of the inner items don't have arguments
}