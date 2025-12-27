#include <array>
#include <iostream>
#include <cstdarg>
#include <functional>

int main(int argc, char* argv []) {
    auto counter {
        [](auto a) {
            static int callCount {};
            ++callCount;
            std::cout << callCount;
        }
    };

    counter(1);
    counter(2);
    counter(2.0);
    counter(3.0);
    counter("testing");

    return 0;
}