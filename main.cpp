#include <iostream>

int addTwoNumbers(int x, int y);

int main() {

    int firstNumber {};
    int secondNumber {};
    std::cout << "enter a number";
    std::cin >> firstNumber;
    std::cout << "enter a second number";
    std::cin >> secondNumber;
    std::cout << addTwoNumbers(firstNumber, secondNumber);
    return 0;
}

int addTwoNumbers(int x, int y) {

    int result {};
    result = x + y;
    return result;

}