#include <iostream>

int main() {
    int n{32};
    double a{34.34};
    // refernces
    int& r{n};
    double& b{a};
    std::cout << n << std::endl;
    std::cout << &n << std::endl;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << "__________________" << std::endl;
    std::cout << r << std::endl;
    std::cout << &r << std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;
    std::cout << "&&&&&&&&&&&&&&&&&&&" <<std::endl;
    //modification
    r=323;
    b=3.345;
    std::cout << n << std::endl;
    std::cout << &n << std::endl;
    std::cout << a << std::endl;
    std::cout << &a << std::endl;
    std::cout << "__________________" << std::endl;
    std::cout << r << std::endl;
    std::cout << &r << std::endl;
    std::cout << b << std::endl;
    std::cout << &b << std::endl;


    return 0;
}