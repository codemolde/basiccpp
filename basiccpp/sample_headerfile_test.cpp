#include <iostream>
#include "sample_headerfile.h"
int main() {
    double sum = 0,num1,num2,num3;
    std::cout << "num1\n num2\n num3\n ";
    std::cin >> num1 >> num2 >> num3;
    add(sum,num1,num2,num3);
    std::cout << sum << std::endl;
    return 0;
}