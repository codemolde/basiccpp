#include <iostream>
#include <cmath>

int main(){

    std::cout << "Enter your radius: " ;
    double r;
    std::cin >> r ;
   const double pi=3.14;
    double area=pi*pow(r,2);
   
  
    std::cout << area;

    return 0;

}