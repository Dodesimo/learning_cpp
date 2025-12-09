#include <iostream>


int main() {

    int apple {5};
    std::cout << apple;

    {

        int apple {8};
        std::cout << apple;

    }
}