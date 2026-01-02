#include <iostream>

template <typename T>
void print(const T& obj){
    std::cout << "template function called";
}

//we want to define specific one for double
template<>
void print<double> (const double& obj){
    std::cout << "specific to double";
}

int main() {
    //use the specialized function template 
    double d {2.0};
    print(d);

    int i {4};
    print(i);

    return 0;
}