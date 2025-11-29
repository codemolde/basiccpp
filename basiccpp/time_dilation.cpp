#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

void cal(double time,double velocity,const double c,double& result){


    result=time*sqrt((1-(pow(velocity,2)/pow(c,2))));
    std::cout << std::fixed << std::setprecision(6);
    std::cout << "here is the dilated time : " << result << " s" << std::endl;

}

int main(){
double time;
double velocity;
const double c=299792456;
double result;
std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
std::cout << "THIS IS A TIME DILATION CALCULATOR!" << std::endl;
std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;

char choice ='y';
while (choice == 'y' || choice == 'Y') {
    std::cout << "Enter your speed and time (in m/s and s): ";
    if (!(std::cin >> velocity >> time))
    {
        std::cout << "invalid input!" << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        continue;
    }
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Your velocity : " << velocity << " m/s" << std::endl;
    std::cout << "Your time : " << time << " s" << std::endl;
    std::cout.unsetf(std::ios::fixed);
    

    if (velocity > c) {
        std::cout << "Invalid speed! Speed must be less than or equal to the speed of light.\n";
    } else {
        cal(time, velocity, c, result);
    }
    std::cout << "------------------------------------------\n";    
    std::cout << "Would you like to calculate again? (y/n): \n";
    std::cin >> choice;
    std::cout << "------------------------------------------\n";
    
    if (choice== 'n' || choice=='N')
    {
        std::cout << "^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
        std::cout << "(^_^)Thanks for using the program!!" << std::endl;
        std::cout << "^^^^^^^^^^^^^^^^^^^^^^" << std::endl;
    }
    
}
    return 0;
}
