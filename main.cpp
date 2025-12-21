#include <iostream>
#include <vector>
//friending member functions

int main() {
    std::vector scores {1, 2, 5, 10, 23, 2};
    int total {};
    for (auto i {0}; i < scores.size(); ++i) {
        total += scores[i];
    }
    double avg {static_cast<double>(total) / static_cast<int>(scores.size())};
    std::cout << avg;
    return 0;
}