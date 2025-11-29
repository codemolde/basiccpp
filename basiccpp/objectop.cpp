#include <iostream>

class animal{
 public:
 std::string name;
 std::string bread;
 int age;

 void eating(){
    std::cout << "This animal is eating";
 }
};

int main(){
    animal animal1;
    animal1.name="dog";
    animal1.bread="pitbull";
    animal1.age=9;

    std::cout << animal1.name<<'\n';
    std::cout << animal1.bread<<'\n';
    std::cout << animal1.age<<'\n';
     animal1.eating();

    return 0;
}