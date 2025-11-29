#include <iostream>

int main() {

    std::string name;
    std::string age;

    std::cout << "whats your name?: " ;
    std::getline(std::cin,name);


    std::cout << "your age: " ;
    std::cin >> age ;

    std::cout << "hello " << name << '\n';
    std::cout << "you are " << age << " years old." ;






    return 0;
}