#include <iostream>
#include <fstream>

int main() {
    //can manually open stuff
    std::ofstream output {"text.txt"};
    output.close();
    output.open("text.txt", std::ios::app); //append mode
    output << "test";
    output.close();
}