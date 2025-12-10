#include <iostream>
#include <string.h>

int main() {

    {
        int i {0}; //this is required because the counter variable loses scope outside loop
        while (i < 10) {
            std::cout << i;
            ++i;
        }

    }

}