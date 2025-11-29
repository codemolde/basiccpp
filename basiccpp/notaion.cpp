#include <iostream>
#include <iomanip>

int main(){
    double a=3.1459738728123;
    double b=234324.4332;
    double c=243;

    std::cout << "not fixed : " << a << " " << b << " " << c << std::endl;

    std::cout << std::fixed;
    std::cout << "fixed : " << a << " " << b << " " << c << std::endl;

    std::cout << std::scientific;
    std::cout << "scientific notion  : " << a << " " << b << " " << c << std::endl;


    std::cout << std::setprecision(30);
    std::cout << "precised to 30 digit : " << a << " " << b << " " << c << std::endl;

    std::cout.unsetf(std::ios::scientific|std::ios::fixed);
    std::cout << "reseted to normal : " << a << " " << b << " " << c << std::endl;


    return 0;
}