#include <array>
#include <iostream>
#include <cstring>
#include <functional>

int main(int argc, char* argv []) {
    std::cout << "arguments:" << argc << '\n';
    for (auto i {0}; i < argc; ++i) {
        std::cout << "arguments" << argv[i] << '\n';
    }
    return 0;
}