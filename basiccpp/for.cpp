#include <iostream>

int main(){
    /* for( int i=19;i<=190;i=i+19){
       std::cout << " 👍🏻 " << i << '\n';
    }*/
int n;
std::cout << "Enter your n: ";
    std::cin >> n;
   int a=3;
   for(int i=1;i<=n;i++){
    
    std::cout <<" 👍🏻 "<< a <<'\n';
    a*=4;
   }
    return 0;
}