#include <iostream>
#include <fstream>

int main() {
    std::ifstream a {"text.txt"};
    if (!a) {return 1;}
    std::string input {};
    //while we can still extract
    while (a >> input) { //this gets each possible individual token from the stream and puts them into the variable
        std::cout << input << '\n';
    }
    return 0;
}