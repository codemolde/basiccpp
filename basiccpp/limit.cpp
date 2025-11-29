#include <iostream>
#include <limits>

int main(){

    std::cout << "limit of short : " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of unassinged short : " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of integer : " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of unsigned integer : " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of double : " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of long : " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of long double : " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of float : " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::endl;
    std::cout << "limit of long int : " << std::numeric_limits<long int>::min() << " to " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << std::endl;
    return 0;
}