#include <iostream>

int main(){
    const std::string num[][4]={
        {"Daksh","Beniwal"},
        {"Neeru","Beniwal"},
        {"Balwan","Beniwal"},
        {"Vandita","Beniwal"}
    };
    std::cout << num[0][0] << " ";
    std::cout << num[0][1] << " \n";
   
   
   
    std::cout << num[1][0] << " ";
    std::cout << num[1][1] << " \n";

    std::cout << num[2][0] << " ";
    std::cout << num[2][1] << " \n";
   
   
   
 
   
    std::cout << '\n';

    int rows=sizeof(num)/sizeof(num[0]);
    constexpr int cols=sizeof(num[0])/sizeof(num[0][0]);

    for(int i =0;i<rows;i++){
        for(int j=0;j<cols;j++){
            std::cout << num[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}