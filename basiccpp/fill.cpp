#include <iostream>

int main(){
    const int size=99;
    std::string array[size];
    fill(array,array+(size/3),"cpp is bad.");
    fill(array+(size/3),array+(size/3)*2,"cpp is good.");
    fill(array+(size/3)*2,array+size,"cpp is trash.");
    for(std::string arrays : array){
    std::cout << arrays << '\n';
    }
    return 0;
}