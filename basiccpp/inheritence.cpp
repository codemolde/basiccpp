#include <iostream>

class animal{
public:
bool alive=true;
void eat(){
    std::cout << "i am eating!";
}
};
class dog : public animal{};

int main(){
    dog aot;
    std::cout << aot.alive;
    aot.eat();

    return 0;
}