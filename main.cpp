#include <array>
#include <iostream>
#include <algorithm>
#include <functional>

class Patient;
class Doctor {
    std::string name;
    std::vector<std::reference_wrapper<const Patient>> patients {};
public:
    Doctor(std::string_view n): name {n}{}
    void addPatient(Patient& p); //declare
};

class Patient {
    std::string name;
    std::vector<std::reference_wrapper<const Doctor>> doctors {};
public:
    Patient(std::string_view n): name {n} {}
    void addDoctor(const Doctor& d) {
        doctors.push_back(d);
    }
    friend void Doctor::addPatient(Patient& p);
};

void Doctor::addPatient(Patient& p){
    patients.push_back(p);
    p.doctors.push_back(*this); 
}

int main(){
    return 0;
}