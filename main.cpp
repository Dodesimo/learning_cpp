#include <iostream>
#include <fstream>

int main() {
    std::ifstream a {"text.txt"};
    if (!a) {return 1;}
    std::string input {};
    //while we can still extract
    while (std::getline(a, input)) { //this gets each line
        std::cout << input << '\n';
    }
    return 0;
}