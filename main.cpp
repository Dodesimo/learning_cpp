#include <iostream>

class Animal {
protected:
    Animal() {};
public:
    virtual void saySmth() const {std::cout << "????" << '\n';}
};

class Dog : public Animal {
public:
    Dog() {};
    virtual void saySmth() const {std::cout << "Bark!" << '\n';}
};

class Cat : public Animal {
public:
    Cat() {};
    virtual void saySmth() const {std::cout << "mew!" << '\n';}
};

void sayingSmth(const Animal* a){
    a->saySmth();
}

int main() {
    Dog a {};
    Dog b {};
    Dog c {};
    
    Cat aCat {};
    Cat bCat {};
    Cat cCat {};
    
    Animal* animals[] {&a, &b, &c, &aCat, &bCat, &cCat};
    for (const auto& a : animals){
        sayingSmth(a);
    }
}