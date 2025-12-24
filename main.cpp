#include <array>
#include <iostream>
#include <cstring>

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    for (auto i {0}; i < arr.size(); ++i) {
        int minimum {std::numeric_limits<int>::max()};
        for (auto j {i + 1}; j < arr.size(); ++j) {
            if (arr[j] < minimum) {
                minimum = arr[j];
            }
        }
        std::swap(arr[i], minimum);
    }

    for (const auto& a : arr){std::cout << a << '\n';}

    return 0;
}