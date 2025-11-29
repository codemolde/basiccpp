#include <iostream>

int main(){

  size_t i{0};
  const size_t count{10};
    for(;i<count;++i){
        std::cout << "hello" << std::endl;
    }
    std::cout << i <<std::endl;

    return 0;
}