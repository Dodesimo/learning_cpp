//
// Created by Devam Mondal on 12/14/25.
//

#include <iostream>

#ifndef FOO_H
#define FOO_H

template <typename T>
void printMax(T a, T b){
    if (a > b){
        std::cout << a;
    } else {
        std::cout << b;
    }
}

#endif //FOO_H
