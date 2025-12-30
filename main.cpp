#include <array>
#include <iostream>
#include <algorithm>

class Point2d{
    int x {};
    int y {};
public:
    Point2d(int x, int y): x {x}, y {y} {}
};

class Line{
    Point2d first {};
    Point2d second {}; //composition
};

int main() {
    return 0;
}