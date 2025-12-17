#include <iostream>
#include <optional>
#include <string.h>
template <typename T>
struct Test {
    T first {};
    T second {};
};

int main() {
    Test<int> a {};
    return 0;
}