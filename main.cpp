template <int size>
class Foo {
    int value {};
public:
    Foo(): value {size} {} //allows us to initialize a const expr
};

int main() {
    int x {5};
    Foo<x> a {}; //this doesn't work because x is not constexpr
    constexpr int y {5}; 
    Foo<y> b {}; //this works because y is explicitly constexpr
}