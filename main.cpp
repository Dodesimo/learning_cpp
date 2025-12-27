#include <array>
#include <iostream>
#include <cstdarg>
#include <functional>

void repeat (int n, std::function<bool(int)> fn) { //std::function pointer passed in to the parameter
    for (auto i {0}; i < n; ++i){
        fn(i);
    }
}

template <typename T>
void repeat2 (int n, const T& func) { //template name
    for (auto i {0}; i < n; ++i) {
        func(i);
    }
}

void repeat3 (int n, const auto* func) { //new way to define a function template
    for (auto i {0}; i < n; ++i) {
        func(i);
    }
}

void repeat4(int n, bool(*func)(int)) { //pass in a function pointer
    for (auto i {0}; i < n; ++i) {
        func(i);
    }
}



int main(int argc, char* argv []) {
    bool (*isEven)(int i) {
        [](int i) -> bool {return i % 2 == 0;}
    };
    std::cout << std::boolalpha << isEven(5); //
    return 0;
}