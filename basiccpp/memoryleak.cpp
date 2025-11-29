#include <iostream>

int main() {
    {
        int *v = new int{23};
        std::cout << *v << std::endl;
        delete v;
    }
}