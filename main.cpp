#include <array>
#include <iostream>

class Matrix {
    double data[4][4] {}; //four by four matrix value initialized
public:
    double operator()(int row, int column) const; //this is a const overload of () that allows for indexing on const matrices
    double& operator()(int row, int column); //overload that works for value changing
};

double& Matrix::operator()(int row, int column){
    return data[row][column]; //do some bounds checking
}

double Matrix::operator()(int row, int column){
    return data[row][column]; //do some bounds checking
}


int main() {
    return 0;
}