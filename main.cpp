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

int main() {
    Storage<int> s {};
    for (auto i {0}; i < 8; ++i) {
        s.set(i, i);
    }
    for (auto i {0}; i < 8; ++i) {
        std::cout << s.get(i) << '\n';
    }
}