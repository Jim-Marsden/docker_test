#include <iostream>
#include <any>

int main() {

    std::any amy = 4ull;

    std::cout << "Hello, World!1" << std::endl;
    std::cout << "Amy's value: " << std::any_cast<unsigned long long>(amy) << '\n';
    return 0;
}
