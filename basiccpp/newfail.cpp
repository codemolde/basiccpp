#include <iostream>

int main() {
    /*
   for (int i=0;i<10000000000000000;i++) {
       try {
           int *n=new int[100000000000];
           std::cout<<n<<std::endl;
       }catch (std::exception& ex) {
           std::cout << ex.what() << std::endl;
       }
   }
   */
    for (int i=0;i<100;i++) {

            int *n=new(std::nothrow) int[100000000000000];
            std::cout<<n<<std::endl;

        if (n!=nullptr) {
            std::cout << "successful" << std::endl;
        }
        else {
            std::cout << "failed" << std::endl;
        }

    }
    return 0;
}