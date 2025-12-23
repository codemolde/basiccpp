//
// Created by daksh beniwal on 20/12/25.
//
#include <iostream>
#include <string>

template <typename T>
void print(T val) {
    std::cout << val << std::endl;
}

int main() {

    print(5);
    print("hello");
    print(475.9);

    return 0;
}