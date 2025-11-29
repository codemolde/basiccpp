#include <iostream>

class cod{
public:
std::string sniper;
std::string smg;

cod(std::string sniper){
this->sniper=sniper;
}
cod(std::string sniper,std::string smg){
this->sniper=sniper;
this->smg=smg;
}
};

int main(){
    cod cod1("DL-347");
    cod cod2("car-98","scorpio");
    cod cod3("AWM","Scarlet");
    std::cout << cod1.sniper<<'\n';
    std::cout << cod2.smg<<'\n';
    std::cout << cod2.sniper<<'\n';
    std::cout << cod3.sniper <<'\n';
    std::cout << cod3.smg << '\n';



    return 0;
}