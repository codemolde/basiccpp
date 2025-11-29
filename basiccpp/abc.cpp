#include <iostream>

int main(){

    int age;
    std::string statement;

    std::cout << "enter your age: ";

    std::cin >> age;

    
    if(age >=18){
        std::cout << "welcome!";
    }
    else if(age < 0){
        std::cout << "your age is not even possible!";}
    else {
        std::cout << "you are too young.";

    }
    






    return 0;
}