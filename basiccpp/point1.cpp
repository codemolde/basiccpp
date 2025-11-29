#include <iostream>

int main() {
    int *a {};

    int b{35};

    a=&b;

    std::cout << a << std::endl;
    std::cout << *a << std::endl;
    std::cout << &b << std::endl;
    return 0;
}
