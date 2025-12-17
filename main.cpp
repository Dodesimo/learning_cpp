#include <iostream>
#include <optional>
#include <string.h>

template <typename T>
struct Triad {
    T a {};
    T b {};
    T c {};
};

template <typename T>
void print(Triad<T> t) {
    std::cout << "[" << t.a << ',' << t.b << ',' << t.c << "]";
}

int main() {
    Triad<int> t1 {1, 2, 3 };
    print(t1);

    Triad<double> t2 { 1.2, 3.4, 5.6 };
    print(t2);

    return 0;
}