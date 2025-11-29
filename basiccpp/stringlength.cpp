#include <iostream>

namespace first{
    std::string name;
}
namespace second{
    std::string name;
}
namespace third{
    std::string name;
}



int main(){

    std::string name;

    std::cout << "ENTER YOUR NAME: ";
    std::getline(std::cin,name);
    if(name.length() > 15){
        std::cout << "Your name can't be that long.\n";

    }
    else if (name.empty()){
        std::cout << "You didn't enter your name.\n";
    }
    else{
        std::cout << "Welcome ." << name << '\n';
    }
    first::name = name;
    second::name = name;
    third::name = name;

    third::name.append("@gmail.com");
    std::cout << "Your user name is now " << third::name << '\n';

   
    std::cout << "Your name first letter is " <<  name.at(0) << '\n';

    second::name.insert(0, "@");
    std::cout << "Your name displaed as " << second::name << '\n';

    std::cout << name.erase(0,5) << " is your last name" << '\n';
    std::cout << name.find('n') << " is your last name third letter";

   
    return 0;
}