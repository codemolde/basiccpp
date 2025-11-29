#include <iostream>
#include <cmath>

int main(){
    double a;
    double b ;
    double c;

   
   
    
    std::cout << "enter side A: " ;
    std::cin >> a ;
    a = pow(a,2);


    std::cout << "enter side B: " ;
    std::cin >> b ;
    b = pow(b,2);
    c = sqrt(a+b);


    std::cout << "side C= " << c ;

    return 0;
}