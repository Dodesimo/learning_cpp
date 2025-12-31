#include <iostream>

class Person{
    std::string name {};
    int age {};
public:
    Person() = default;
    Person(std::string_view n, int a): name {n}, age {a} {}
    int const getAge() {return age;}
};

class BaseballPlayer : public Person {
    //public inheritance
    std::string team {};
    int bA {};
public:
    BaseballPlayer() = default; //will use the default person constructor
    BaseballPlayer(const std::string_view n, int a, const std::string_view t, int battingAvg):
    Person(n, a),
    team {t},
    bA {a} {}
};

int main(){
    BaseballPlayer b {}; //call default constructor
    BaseballPlayer p {"Ted", 30, "Mets", 250};

    std::cout << b.getAge() << '\n';
    std::cout << p.getAge() << '\n';
    return 0;
}