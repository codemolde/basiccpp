#include <iostream>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9};
    int count {std::size(a)};
    for(int i=0;i<count;++i) {
        std::cout<<a[i]<<" ";
    }
    return 0;
}