#include <iostream>
#include <string.h>

int main() {

    int count {1};

    while (count < 11) {

        if (count % 2 == 1) {

            std::cout << "odd\n";

        } else {

            std::cout << "even\n";

        }

        count += 1;

    }

}