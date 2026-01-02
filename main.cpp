#include <iostream>

template <typename T>
class Storage {
    T array[8];
public:
    void set (T index, const T& value) {
        array[index] = value;
    }

    const T& get (T index) const{
        return array[index];
    }
};

template<>
//class template specialization
class Storage<bool> { //this is completely different
public:
    Storage<bool>() {std::cout << "we are using a class template specialization";}
};

int main() {
    Storage<int> s {};
    for (auto i {0}; i < 8; ++i) {
        s.set(i, i);
    }
    for (auto i {0}; i < 8; ++i) {
        std::cout << s.get(i) << '\n';
    }

    //invokes class creation from teh class template specialization for bool
    Storage<bool> b {};

}