#include <iostream>
#include <string.h>

class Ball {
    std::string color;
    double radius;
public:
    Ball (std::string_view c, double r)
        : color {c}
        , radius {r}
        {};

    std::string& getColor() {
        return color;
    }

    double getRadius() {
        return radius;
    }
};

void print(Ball& b) {
    std::cout << "Ball(" << b.getColor() << ", " << b.getRadius() << ")" << "\n";
}

int main() {
    Ball blue { "blue", 10.0 };
    print(blue);

    Ball red { "red", 12.0 };
    print(red);
    return 0;
}