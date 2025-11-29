#include <iostream>

int main(){

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "enter (+,-,*,/:)" << '\n';
    std::cin >> op;

    std::cout << "enter num1:" << '\n';
    std::cin >> num1;

    std::cout << "enter num2:" << '\n';
    std::cin >> num2;

    switch(op){
        case '+':
        result=num1+num2;
        std::cout << "result:" <<result;
        break;
        case '-':
        result=num1-num2;
        std::cout << "result:" <<result;
        break;
        case '*':
        result=num1*num2;
        std::cout << "result:" <<result;
        break;
        case '/':
        result=num1/num2;
        std::cout << "result:" << result;
        break;
        default:
        std::cout << "please enter a valid opperator.";

    }






    return 0 ;
}