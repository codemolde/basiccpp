#include <iostream>

int main(){

    int num=109;
    int *pnum=&num;
    int *pointer  = nullptr;
    int x=45;
   // pointer=&x;

    std::cout << *pnum << '\n';
    std::cout << &num << '\n';

    if(pointer==nullptr){
        std::cout << "address not assiend\n"; 
    }
    else{
        std::cout << "address assiend\n";
        std::cout << *pointer << '\n';
    }

    return 0;
}