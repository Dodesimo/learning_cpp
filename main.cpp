#include <iostream>

int main() {

    constexpr double gravity (9.8);

    if constexpr (gravity == 9.8) {

        std::cout << "obv evals";

    } else {

        std::cout << "doesn't eval";

    }

}