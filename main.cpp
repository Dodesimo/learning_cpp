#include <iostream>
#include <iomanip>

int main() {
    char buf[10] {}; //ten character array
    std::cin.get(buf, 10); //include white spaces and get ten characters
    std::cout << buf;
    return 0;
}