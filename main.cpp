#include <iostream>
#include <vector>
#include <ranges>

namespace Students {
    enum Names {
        a,
        b,
        c,
        max_students, //count enumerator
    };
}

int main() {
    std::vector<int> names (Students::Names::max_students);
    names[Students::Names::b] = 2; //get the index/value associated with Students::Names::b
    return 0;
}