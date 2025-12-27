#include <array>
#include <iostream>
#include <cstdarg>

//variable number of parameters after count
double findAverage(int count, ...) {
    int sum {};
    //how to access the elipses, use std::va_list
    std::va_list list;
    //iniitlaize through va_start function, first argument is the std::va_list instance, the second argument is
    //the last non-ellipsis parameter
    va_start(list, count);
    //use va_arg to extract value from the elipsis list and then what type the value should be
    for (auto i{0}; i < count; ++i) {
        sum += va_arg(list, int);
    }

    return static_cast<double>(sum) / count;
}

int main(int argc, char* argv []) {
    std::cout << findAverage(6, 1, 3, 5, 3, 5, 2) << '\n';
    std::cout << findAverage(2, 2, 3) << '\n';
    return 0;
}