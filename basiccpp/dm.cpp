#include <iostream>

int main(){
    int *pnum=NULL ;
    pnum=new int;
    *pnum=34;
    std::cout << "Address : " << pnum << '\n';
    std::cout << "value : " << *pnum << '\n';
    delete pnum;
    int size;
    std::cout << "Enter your number of grades: ";
    std::cin >> size;
    char *pgrades=NULL;
    pgrades=new char[size];

    for(int i=0;i <size;i++){
        std::cout << "Enter your grades "<< i+1<<": ";
        std::cin >> pgrades[i]; 
    }
    std::cout << "Your entered grades are as follow: " <<'\n';
    for(int i=0;i<size;i++){
       
        std::cout  << pgrades[i] << " ";

    }
    delete[] pgrades;
    return 0;
}