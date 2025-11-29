#include <iostream>
#include <iomanip>
int power(int base, int exponent) {
    if(exponent == 0) {
        return base=1;
    }
    int neg = exponent < 0;
    if (neg) {
        exponent = -exponent;
    }
    int result = 1;
    for (int i =1; i <= exponent; i++) {
        result = result * base;
    }
    if (neg) {
        return  1/result;
    }
    return result;
}

double sqrt_2(double a) {
    double Guess_x=1;
    int k=0;
    while (k<=5) {
        Guess_x=1/2*(Guess_x+a/Guess_x);
        k++;
    }
    return Guess_x;
}
double sqrt_nth(double a,double n) {
    double Guess_x=1;
    int k=0;
    while (k<=5) {
        Guess_x=1/n*((n-1.0)*Guess_x+a/power(Guess_x,n-1.0));
        k++;
    }
    return Guess_x;
}
int main() {
    std::cout << power(2,3) << std::endl;
    std::cout<<sqrt_2(2)<<std::endl;
    std::cout<<sqrt_nth(8.0,3.0)<<std::endl;
}