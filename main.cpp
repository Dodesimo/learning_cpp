#include <iostream>

int main() {

   //basic calculator
   int firstNumber {};
   int secondNumber {};
   int sum {};

   std::cout << "Enter your first number";
   std::cin >> firstNumber;
   std::cout << "Enter your second number";
   std::cin >> secondNumber;
   sum = firstNumber + secondNumber;
   std::cout << sum;


}