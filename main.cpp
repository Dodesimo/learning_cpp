#include <iostream>
#include <iomanip>

int main() {
    char buf[10] {}; //ten character array
    std::cin.get(buf, 10); //include white spaces and get ten characters
    //use getline to discard new line operator.
    std::cout << buf << '\n';
    std::cout << std::cin.gcount() << '\n';
    return 0;
}