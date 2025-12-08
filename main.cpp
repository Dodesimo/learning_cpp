#include <iostream>

namespace Goo {
    int doSomething (int a, int b) {

        return a - b;

    }
}

namespace Foo {
    int doSomething(int a, int b) {

        return a + b;

    }
}

int main() {

    std::cout << Foo::doSomething(3, 2);
    return 0;

}