#include <iostream>
using namespace std;

double square(long double lenght);
double volume (long double lenght);
string name(string firstname,string lastname,long double area,long double vcube, string fullname);

int main(){

    double lenght =98.560;
    long double  vcube=volume(lenght);
    string firstname;
    string lastname;
  
    
    string fullname =firstname+lastname;
    name(firstname,lastname);
  long  double area=square(lenght);

 
    

  
    

    return 0;
}

double square(long double lenght){
   
    return   lenght*lenght;
}
double volume (long double lenght){
    return lenght*lenght*lenght;
}
string name(string firstname,string lastname,long double area,long double vcube, string fullname){
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    cout << "area: " <<area <<'\n';
    cout << "volume: " <<vcube<<'\n';
    cout << "hello "<< fullname;
}