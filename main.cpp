#include <iostream>

class Point {
    int x {};
    int y {};
public:
    Point (int x, int y): x {x}, y {x} {}
    friend std::ostream& operator<< (std::ostream& s, const Point& p){ //example of a dependency (uses std::ostream without any member variable to do smth.)
        s << p.x << '\n' << p.y;
        return s;
    }
};

int main() {
    Point p {2, 5};
    std::cout << p;
}

