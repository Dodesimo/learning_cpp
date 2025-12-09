#include <iostream>

constexpr int a;

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

    namespace active = Foo;
    std::cout << active::doSomething(3, 2);
    return 0;

}