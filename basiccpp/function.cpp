#include <iostream>


void blender(int rows,int cols,char sym){
    std::cout << "Enter your rows and colums: ";
    std::cin >> rows >> cols;

    std::cout << "Enter your symbol: " ;
    std::cin >>sym;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            std::cout << sym <<" ";
        }
        std::cout <<'\n';
    }
    
   
}

int main(){
    int rows;
    int cols;
    char sym;
   
 blender( rows, cols, sym) ;


   

    return 0;
}