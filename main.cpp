#include <array>
#include <iostream>
#include <cstdarg>
#include <functional>

int main(int argc, char* argv []) {

    int var {1};
    auto lambda {
        [var]() mutable {
            ++var;
            std::cout << "var is now: " << var << '\n';
        }
    };

    lambda();
    lambda();
    std::cout << var;
    return 0;

}