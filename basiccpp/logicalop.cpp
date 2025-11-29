#include <iostream>

int main(){

    int temp;
    bool sunny = true;

    std::cout << "enter your teperature: ";
    std::cin >> temp;

   /* if(temp > 0 && temp < 30){
        std::cout << "temperature is good.";

    }
    else{
        std::cout << "temperature is bad.";
    }*/
    if(temp <= 0 || temp >= 30){
        std::cout << "temperature is bad.";

    }
    else{
        std::cout << "temperature is good.";
    }
    if(!sunny){
        std::cout << "its sunny outside";
    }
    else{
        std::cout << "its cloudy outside";
    }






    return 0;
}