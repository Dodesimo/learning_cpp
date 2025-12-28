#include <array>
#include <iostream>

class Point {
    int x {};
    int y {};
    int z {};
public:
    Point (int x, int y, int z): x {x}, y {y}, z {z} {}
    //overload ! operator
    bool operator! ();
};

bool Point::operator!() {
    return (x != 0 && y != 0 && z != 0);
}

int main(){
    Point p {1, 2, 3};
    std::cout << std::boolalpha << !p;
}