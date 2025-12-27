#include <array>
#include <iostream>
#include <cstdarg>
#include <functional>

struct Student {
    std::string name {};
    int points{};
};

int main(int argc, char* argv []) {
    std::array<Student, 8> arr{
              { { "Albert", 3 },
                { "Ben", 5 },
                { "Christine", 2 },
                { "Dan", 8 }, // Dan has the most points (8).
                { "Enchilada", 4 },
                { "Francis", 1 },
                { "Greg", 3 },
                { "Hagrid", 5 } }
    };

    const auto largest {std::max_element(arr.begin(), arr.end(), [](const Student& a, const Student& b){return a.points < b.points;})};
    if (largest == arr.end()) {std::cout << "not found";}
    std::cout << (*largest).name;
}