#include <iostream>
int main() {
    int number {};
    std::cout << "Enter a number: ";
    std::cin >> number;
    try {
        if (number < 0) {
            throw "Can't have a negative number!";
        }

        std::cout << "doubled number: " << number * 2;
        return 0;
        
    } catch (const char* error) {

        std::cout << error << '\n';
        
    }
}