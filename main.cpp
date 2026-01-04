#include <algorithm> 
#include <cctype> 
#include <iostream>
#include <ranges>
#include <string>
#include <string_view>

//function to see if a string has all letters, numbers, and spaces

bool isAlphaNum(std::string_view s){
    return std::all_of(s.begin(), s.end(), [](char c) {return std::isdigit(c) || std::isspace(c);});
}

int main() {
    int a {};
    while (true) {
        std::cout << "valid number?" << '\n';
        std::cin >> a;
        if (std::cin.fail()) {
            //reset
            std::cin.clear();
            //clear the buffer
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "try again" << '\n';
            continue;
        }
        break;
    }
    return 0;
}