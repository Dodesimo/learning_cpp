#include <array>
#include <iostream>
#include <cstdarg>

int main(int argc, char* argv []) {
    auto isEven {
        [](int i) -> bool {return i % 2 == 0;}
    };
    std::cout << std::boolalpha << isEven(5);
    return 0;
}