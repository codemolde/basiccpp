#include <iostream>

namespace abc{
    int age = 16;
}
typedef std::string dring_t;
using dj = std::string ;

int main(){
    
    // integers (whole number)
    int age = 36 ;
    int year = 2025 ;
    int rollnumber = 15 ;
    // double (decimal numbers)
    double bankbalance = 102.56 ;
    double temperature = 42.7 ;
    double height = 180.5 ;

    std::cout << age << '\n' ;
    std::cout << year << '\n' ;
    std::cout << rollnumber << '\n' ;
    std::cout << bankbalance << '\n' ;
    std::cout << temperature << '\n' ;
    std::cout << height << '\n' ;

    // single character
    char currency = '$' ;
    char grade = 'a' ;
    char temperaturesymbol = '*' ;
    char temperaturesiunit = 'C' ;

    std::cout << currency << bankbalance << '\n' ;

     // string (contains a sequence of sentence)
     std::string name = "daksh" ;
     std::string lastname = "beniwal" ;
     std::string myclass = "11th" ;


     std::cout << name ;
     std::cout << lastname << '\n';

     //boolens (true or false)
     bool light = true;
     bool ordered = false;

     std::cout << ordered << ordered << '\n' ;

     //final output
     std::cout << "hello,i'm " << name << " " << lastname << '\n' ;
     std::cout << "i am " << age << " years old " << '\n' ;
     std::cout << "this is year " << year << '\n' ;
     std::cout << "and i am curruntly studing in " << myclass << '\n' ;
     std::cout << "i curruntly have " << currency << bankbalance << '\n' ;
     std::cout << "today's temperature is " << temperature << temperaturesymbol << " " << temperaturesiunit << '\n' ; 

     //const (can't be modified)
     const double RADIUS_OF_EARTH = 6400.56 ;
     const double PI = 3.14597 ;
     const double AREA = PI*RADIUS_OF_EARTH*RADIUS_OF_EARTH ;

     std::cout << AREA << '\n' ;
     std::cout << abc::age << '\n' ;

     dring_t firstname = "djrajas" ;
     dj tiktok = "trash" ;

     std::cout << firstname << '\n' ;
     std::cout << tiktok << '\n';
     
     int dount = 4;
     dount = dount + 2;
     
     std::cout << dount << '\n';

     int fries = dount*2-1/3*9+1;
     
     std::cout << fries << '\n' ;

     double reminder = fries % 5;

     std::cout << reminder << '\n' ;

     int score = 92;
     int total = 150;

     double percentage = score/(double)total * 100;

     std::cout << percentage <<  "%" <<'\n' ;

     





    return 0;
}
