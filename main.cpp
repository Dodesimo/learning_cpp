#include <iostream>
#include <string.h>

int main() {

    char c {97};
    int counter {0};
    while (counter < 26) {

        std::cout << "Character: " << static_cast<char>(c + counter) << "," << "ASCII value: " << c + counter << '\n';
        ++counter;

    }
}