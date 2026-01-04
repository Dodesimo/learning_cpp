#include <iostream>
#include <fstream>

int main() {
    //can manually open stuff
    std::ifstream output {"text.txt"};
    output.seekg(0, std::ios::end); //go to the end of the file
    std::cout << output.tellg(); //will tell us the number of bytes
}