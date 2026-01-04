#include <iostream>
#include <iomanip>

int main() {
    std::cout.setf(std::ios::hex, std::ios::basefield); //within the basefield set of flags, turn everything off and turn hex on
    std::cout << 28;
}