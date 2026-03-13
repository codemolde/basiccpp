#include <iostream>

int main(){
    int arr[3]{
        10,20,30
    };
    int *p = arr;
    std::cout << &p << std::endl;
    std::cout << &p + 3 << std::endl;
    return 0;
}