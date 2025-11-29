#include <iostream>

int hello(int times);


int main(){

int times;
int a;
int b=0;

do{

std::cout << "###################\n";
std::cout << "1. find factorial.\n";
std::cout << "2. exit.\n";
std::cout << "###################\n";
std::cin >> a;

switch(a){
    case 1:

std::cout << "Enter your factorial num: ";
std::cin >> times;
std::cout << times << "! = ";
std::cout << hello(times);
std::cout << '\n';

 
break;

    case 2:
std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
std::cout << "Thanks for using the program.\n";
std::cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
return 0;
break;
default:
std::cout << "!!!!!!!!!!!!!!!\n";
std::cout << "invalid choice\n";
std::cout << "!!!!!!!!!!!!!!!\n";
}
}while(b==0);

    return 0;
}
int hello(int times){
if(times>1){
return times * hello(times-1);
}
else{
    return 1;
}

}