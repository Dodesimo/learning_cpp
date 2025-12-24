#include <array>
#include <iostream>
#include <cstring>
#include <algorithm>

int main() {
    std::array arr {2, 1, 17, 45, 8, 30};
    std::sort(std::begin(arr), std::end(arr)); //specify pointers to the frtn end end of the array

    for (const auto& a : arr){std::cout << a << '\n';}

    return 0;
}