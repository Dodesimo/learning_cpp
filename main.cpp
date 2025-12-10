#include <iostream>
#include <string.h>

int main() {

    int counter {1};
    while (counter < 100) {
        std::cout << "iteration #: " << counter << '\n';
        if (counter % 10 == 0) {
            std::cout << "This iteration is divisible by ten\n";
        }
        counter += 1;
    }

    return 0;
}