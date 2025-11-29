#include <iostream>

enum particle{electron,positron,neutrino,antineutrino,muon,tau,muonneutrino,tauneutrino};

int main(){

particle choice=electron;


    switch(choice){
        case 0: std::cout << "electron";
    }




    return 0;
}