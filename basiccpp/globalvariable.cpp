#include <iostream>

int n=3;

void num();
int main(){
    int n=1;
    num();
    std::cout << n << '\n';
    return 0;
}
void num(){
    int n= 2;
    std::cout << ::n << '\n';
}