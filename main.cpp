#include <iostream>

class Animal {
protected:
    Animal() {};
public:
    virtual void saySmth() const final {std::cout << "????" << '\n';} //, use final to error out future overrides
};

class Dog : public Animal {
public:
    Dog() {};
    void saySmth() const override {std::cout << "Bark!" << '\n';} //better way to denote a virtual function
};

class Cat : public Animal {
public:
    Cat() {};
    void saySmth() const override {std::cout << "mew!" << '\n';} //better way to denote a virtual function.
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