#include <iostream>

int main(){
    int a=1011010;
    int b=5463;

    std::cout << "hexa decimal : " << std::hex << a << std::endl;
    std::cout << "octal : " << std::oct << a << std::endl;
    std::cout << "decimal : " << std::dec << a << std::endl;
    
    std::cout << "hexa decimal : " << std::hex << b << std::endl;
    std::cout << "octal : " << std::oct << b << std::endl;
    std::cout << "decimal : " << std::dec << b << std::endl;
    return 0;
}