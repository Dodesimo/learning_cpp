#include <iostream>

int apple {5};

int main() {

    std::cout << apple;

    {

        int apple {8};
        std::cout << ::apple;

    }
}