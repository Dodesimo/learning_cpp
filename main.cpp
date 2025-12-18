#include <iostream>
#include <optional>
#include <string.h>

struct Date {
    int day {};
    int month {};
    int year {};

    void printDate() {
        std::cout << day << ' ' << month << ' ' << year;
    }
};


int main() {
    Date d {2, 2, 2};
    d.printDate();
    return 0;
}