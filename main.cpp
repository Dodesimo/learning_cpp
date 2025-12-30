#include <iostream>

class Person {
    std::string name {};
    int age {};
public:
    Person() = default;
    Person(std::string_view name, int a): name {name}, age {a} {}
    std::string_view returnName() const {return name;}
    int returnAge() const {return age;}
};

class BaseballPlayer : public Person {
    double battingAverage {};
    int homeRuns {};
public:
    BaseballPlayer(double bA, int hR): battingAverage {bA}, homeRuns {hR} {}
};