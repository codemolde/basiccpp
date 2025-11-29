#include <iostream>

void chandevalue(std::string &x,std::string &y);

int main(){
    std::string x="minecraft";
    std::string y="gta6";
   
    chandevalue(x,y);

         std::cout << x <<'\n';
         std::cout << y <<'\n';


    return 0;
}
void chandevalue(std::string &x,std::string &y){
    std::string temp;
    temp=x;
    x=y;
    y=temp;
    std::cout << x <<'\n';
    std::cout << y <<'\n';
}