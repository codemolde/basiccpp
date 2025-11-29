#include <iostream>

int main(){
    /* for( int i=19;i<=190;i=i+19){
       std::cout << " 👍🏻 " << i << '\n';
    }*/
int n;
std::cout << "Enter your n: ";
    std::cin >> n;
   bool a=true;
   for(int i=1;i<=n/2;i++){
    if(n%i==0)
    a=false;
    break;
   }
   if(n==1){
    std::cout << "neither prime nor composite";
   }
   else if(a==true){
    std::cout << "prime";
   }
   else {
    std::cout << "composite";
   } 
    return 0;
}