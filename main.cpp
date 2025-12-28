#include <array>
#include <iostream>

class Data {
    int a {};
    int b {};
    int c {};
public:
    Data (int x, int y, int z): a {x}, b {y}, c {z} {};
    friend std::istream& operator>> (const std::istream& in, Data& d);
};

std::istream& operator>> (std::istream& in, Data &d) {
    int a {};
    int b {};
    int c {};
    in >> a >> b >> c;
    
    if (in.fail()) {
        return in;
    } else if (b < 0) {
        std::cin.setstate(std::ios_base::failbit);
    } else {
        d  = Data{a, b, c};
        return in;
    }
};

int main(int argc, char* argv []) {
   return 0;
}
