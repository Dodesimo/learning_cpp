#include <iostream>
#include <fstream>

int main() {
    std::ofstream file {"text.txt"};
    try {
        if (!file) {
            throw "error";
        } 
        file << "test \n";
        file << "test \n";
     }catch (const char* error) {
        std::cout << "error opening file";
    }
}