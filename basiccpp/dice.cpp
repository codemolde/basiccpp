#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    const short minvalue=1;
    const short maxvalue =6;

    srand(time(0));
    int number= (rand() %(maxvalue-minvalue+1 ))+minvalue;
    
    std::cout << number ;
    return 0;
}