#include <iostream>
#include <vector>
#include <ranges>

namespace Students {
    enum Names {
        a,
        b,
        c,
    };
}

int main() {
    std::vector vec {2, 4, 5};
    std::cout << vec[Students::Names::a];
    return 0;
}