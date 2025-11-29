#include <iostream>
#include <ctime>

int main(){

    int num;
    int guess;
    int attempt=0;

    srand(time(NULL));
    num=(rand()%100)+1;
    do
    {
        std::cout << "Enter a number between (1-100): ";
        std::cin >>guess;
        attempt++;

        if (guess>num)
        {
            std::cout << "too high!\n";
           
        }
        else if(guess<num){
            std::cout << "too low!\n";
        }
        else{
            std::cout << "corret!" << " number of attempt: "<<attempt <<'\n';
        }
        
    } while (guess!=num);
    
    return 0;
}