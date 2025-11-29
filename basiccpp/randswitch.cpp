#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL));
    int num=(rand()%5)+1;

    switch (num)
    {
    case 1:std::cout << "you got rbd!\n"; break;
    case 2:std::cout << "you got arise!\n"; break;
    case 3:std::cout << "you got ultra instant!\n"; break;
    case 4:std::cout << "you got bankai!\n"; break;
    case 5:std::cout << "you got griffith as your friend!\n"; break;
    
    
    }
    return  0;
}