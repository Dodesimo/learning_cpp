#include <iostream>

class Fruit {
public:
    enum Type {
        apple,
        banana,
        orange
    };
    Fruit(Type t){this->t = t;}
    Type& getType(){return t;}
    void setType(const Type& t){this->t = t;}
private:
    Type t {};
};

int main() {
    Fruit f {Fruit::apple};
    std::cout << f.getType();
    return 0;
}