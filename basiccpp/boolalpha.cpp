#include <iostream>

int main(){
    bool a=true ;
    bool b=false;

    std::cout << "A : " << a << std::endl;
    std::cout << "B : " << b << std::endl;

    std::cout << std::boolalpha;
    std::cout << "A : " << a << std::endl;
    std::cout << "B : " << b << std::endl;

    std::cout << std::noboolalpha;
    std::cout << "A : " << a << std::endl;
    std::cout << "B : " << b << std::endl;
    return 0;
}