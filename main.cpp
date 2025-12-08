#include <iostream>
#include <cmath>

bool isEven(int n) {

    if (n % 2 == 1) {

        return false;

    } else {

        return true;

    }
}




int main() {

    int n {};
    std::cout << "Enter a number:";
    std::cin >> n;
    std::cout << (isEven(n) ? "Your number is even!" : "Your number is odd!");

}