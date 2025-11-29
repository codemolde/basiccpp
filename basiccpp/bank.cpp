#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance=0;
    int chose=0;
    do
    {
    std::cout << "*******************\n"; 
    std::cout << "Enter your choice: \n";
    std::cout << "*******************\n"; 
    std::cout << " 1. showbalance\n";
    std::cout << " 2. depositmoney\n";
    std::cout << " 3. withdrawmoney\n";
    std::cout << " 4. Exit\n";
    std::cin >> chose;

    std::cin.clear();
    fflush(stdin);


    switch(chose){
        case 1: showbalance(balance);
        break; 
        case 2: balance+=deposit();
        showbalance(balance);
        break; 
        case 3: balance-=withdraw(balance);
        showbalance(balance);
        break;  
        case 4: std::cout << "Thanks for visiting!\n";
        break; 
        default: std::cout << "Invalid choice." << '\n';
    }
    } while (chose!=4);
    
    

    return 0;
}
void showbalance(double balance){
    std::cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << '\n';

}
double deposit(){
    double amount;
    std::cout << "Enter your amount to be deposited: ";
    std::cin >> amount;
    if(amount > 0){
        return amount;

    }
    else{
        std::cout << "That's not a valid deposit\n";
        return 0;
    }

   
}
double withdraw(double balance){
    double amount=0;
    std::cout << "Enter your amunt to be withdraw: ";
    std::cin >> amount;
    if(amount > balance){
        std::cout << "insuffisunt fund\n";
        return 0;

    }
    else if (amount <0){
        std::cout << "That's a invalid withdraw\n";
        return 0;
    }
else{
    return amount;
     }
}