#include <iostream>
#include <iomanip>

int main(){

    int width = 15;
    std::cout << std::left;
    std::cout << std::setfill('_');
    std::cout << "Here's are the details : \n";
    std::cout << std::setw(width) << "Name " << std::setw(width) << "Roll no. " << std::endl ;
    std::cout << std::setw(width) << "daksh " << std::setw(width) << "1" << std::endl ;
    std::cout << std::setw(width) << "abc " << std::setw(width) << "2" << std::endl ;
    std::cout << std::setw(width) << "dkhsh" << std::setw(width) << "3" << std::endl ;

    return 0;
}