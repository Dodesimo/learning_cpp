#include <array>
#include <iostream>

int main() {

    int x {5};
    int y {5};
    int z {5}; //three integer values

    std::array<std::reference_wrapper<int>, 3> arr {x, y, z}; //there are three reference alues
    arr[0].get() = 2; //change the value the reference points at.

    std::reference_wrapper<const int> constReference {std::cref(x)};
    std::reference_wrapper<int> reference {std::ref(x)};

    return 0;
}