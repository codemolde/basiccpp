#include <iostream>

int main(){

    int month;
    std::cout << "enter month(1-12): ";
    std::cin >> month ;

    switch(month){
        case 1:
        std::cout << "its january";
        break;
        case 2:
        std::cout << "its febuary";
        break;
        case 3:
        std::cout << "its march";
        break;
        case 4:
        std::cout << "its april";
        break;
        case 5:
        std::cout << "its may";
        break;
        case 6:
        std::cout << "its june";
        break;
        case 7:
        std::cout << "its july";
        break;
        case 8:
        std::cout << "its august";
        break;
        case 9:
        std::cout << "its september";
        break;
        case 10:
        std::cout << "its octuber";
        break;
        case 11:
        std::cout << "its november";
        break;
        case 12:
        std::cout << "its december";
        break;
        default:
        std::cout << "please enter only numbers between 1-12.";


    }






    return 0;
}