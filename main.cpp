#include <iostream>

class Person {
public:
    std::string name {};
    int age {};
    Person() = default;
    Person(std::string_view name, int a): name {name}, age {a} {}
    std::string_view returnName() const {return name;}
    int returnAge() const {return age;}
};

class BaseballPlayer : public Person {
public:
    double battingAverage {};
    int homeRuns {};
    BaseballPlayer(double bA, int hR): battingAverage {bA}, homeRuns {hR} {}
    std::string_view returnBaseballName() const {return name;}
};