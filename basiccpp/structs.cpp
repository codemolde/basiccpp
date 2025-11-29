#include <iostream>

struct animal{
    std::string name;
    double size;
    bool dangerous;
};
void printresult(animal an){
    std::cout << an.name << '\n';
    std::cout << an.size << '\n';
    std::cout << an.dangerous << '\n';
}
int main(){

   animal animal1;
    animal1.name="dog";
    animal1.size=2.56;
    animal1.dangerous=false;

   printresult(animal1);    

    return 0;
}