#include <iostream>
#include <string.h>

void returnString (int x) {

    switch (x) {

        case 1:
            std::cout << std::string {"One"};
        case 2:
            std::cout << std::string {"Two"};
            [[fallthrough]];
        case 3:
            std::cout << std::string {"Three"};
        default:
            std::cout << std::string{"Not real"};

    }

}

int main() {

    returnString(2);
    return 0;

}