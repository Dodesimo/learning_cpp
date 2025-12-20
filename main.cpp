#include <iostream>

//forward declare this.
class Humidity;

class Temperature {
    int t {};
public:
    Temperature(int x):
    t {x}{}
    friend void printTempHumid(const Temperature& t, const Humidity& h);
};

class Humidity {
    int h {};
public:
    Humidity (int x): h {x} {}
    friend void printTempHumid(const Temperature& t, const Humidity& h);
};

void printTempHumid(const Temperature &t, const Humidity &h) {
    std::cout << "Temperature: " << t.t << '\n';
    std::cout << "Humidity: " << h.h << '\n';
}

int main() {
    Temperature t {2};
    Humidity h {5};
    printTempHumid(t, h);
    return 0;
}