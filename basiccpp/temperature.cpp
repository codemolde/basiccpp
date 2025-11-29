#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "********temperature converter********\n";
    std::cout << "C=celcius \n";
    std::cout << "F=fernheit \n";
    
    std::cout << "enter the unit you want to convert(Celceus/fernheit): ";
    std::cin >> unit;
    if(unit == 'c' || unit == 'C'){
        std::cout << "enter your temperature in fernheit: ";
        std::cin >> temp;
        temp = (temp-32.0)/1.8;
        std::cout << "Temperature: " << temp << "C" << '\n';

    }
    else if(unit == 'f' || unit == 'F'){
        std::cout << "enter your temperature in celceus: ";
        std::cin >> temp;
        temp = 1.8*temp+32.0;
        std::cout << "Temperature: " << temp << "F" << '\n';

    }
    else{
        std::cout << "enter only in unit C/F.\n";
    }
   





    std::cout << "*************************************\n";



    return 0;
}