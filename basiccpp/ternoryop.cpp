#include <iostream>

int main(){

    char grade;

    std::cout << "enter your grade:";
    std::cin >> grade;

    std::cout << (grade == 'a' ? "great":"need to do hard work!");

    return 0;
}