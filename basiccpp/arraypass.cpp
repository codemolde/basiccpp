#include <iostream>

double gettotal(double mrp[],double size){
    double total;
    for(int i=0;i<size;i++){
     total=total+ mrp[i];
    }
    return total;
}

int main(){

    double mrp[]={23,34,54.66,56.67,65.563,1742.32};
    double size=sizeof(mrp)/sizeof(double);
    double total= gettotal(mrp,size);
   
    std::cout<< "$"<<total;


    
    return 0;
}