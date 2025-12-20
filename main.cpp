#include <iostream>

template <typename U, typename V, typename Z>
class Triad {
    U a {};
    V b {};
    Z c {};
public:
    Triad(const U& aP, const V& bP, const Z& cP):
    a {aP},
    b {bP},
    c {cP}
    {
    }
    void print() const {
        std::cout << "[" << a << "," << b << "," << c << "]";
    }
    const U& first() const {
        return a;
    }
};


int main()
{
    Triad<int, int, int> t1{ 1, 2, 3 };
    t1.print();
    std::cout << '\n';
    std::cout << t1.first() << '\n';

    using namespace std::literals::string_literals;
    const Triad t2{ 1, 2.3, "Hello"s };
    t2.print();
    std::cout << '\n';

    return 0;
}
