#include <iostream>
#include <string.h>

std::string returnString (int x) {

    switch (x) {

        case 1:
            return std::string {"One"};
        case 2:
            return std::string {"Two"};
        case 3:
            return std::string {"Three"};
        default:
            return std::string{"Not real"};

    }

}

int main() {

    std::cout << returnString(2);
    return 0;

}