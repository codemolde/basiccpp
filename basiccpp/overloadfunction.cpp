#include <iostream>

void keyboard();
void keyboard(std::string feature1);
void keyboard(std::string feature1,std::string feature2);
int main(){
    keyboard("rgb","creammy");
    return 0;
}
void keyboard(){
    std::cout << "your keyboard is \n";
}
void keyboard(std::string feature1){
    std::cout << "your keyboard is " << feature1;
}
void keyboard(std::string feature1,std::string feature2){
    std::cout <<  "your keyboard is " << feature1 << " and " << feature2;

}