#include <array>
#include <iostream>
#include <cstring>

template <typename U, std::size_t ROW, std::size_t COL>
using array = std::array<std::array<U, COL>, ROW>;

template <typename U, std::size_t ROW, std::size_t COL>
void printArray(const array<U, ROW, COL>& matrix) {
    for (auto i {0}; i < ROW; ++i) {
        for (auto j {0}; j < COL; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
}

int main() {
    std::array<std::array<int, 5>, 3> t {
        {
            {1, 2, 3},{2, 4, 5}, {4, 2, 12}
        }};

    std::array<std::array<std::string, 4>, 6> s {};
    printArray(t);
    printArray(s);

    return 0;
}