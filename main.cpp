#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector col {"data", "test", "oof"}; //ctad string
    for (const std::string& s: std::views::reverse(col)) {
        std::cout << s << "\n";
    }
    return 0;
}