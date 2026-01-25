//
// Created by daksh beniwal on 25/01/26.
//
#include <thread>
#include <iostream>
typedef unsigned long long uint64;

uint64 Oddnum=0;
uint64 Evennum=0;

void findOddnum(uint64 start,uint64 end) {
    for (uint64 i = start; i <= end; i++) {
        if ((i & 1) == 1) {
            Oddnum+=i;
        }
    }
}
void findEvennum(uint64 start,uint64 end) {
    for (uint64 i = start; i <= end; i++) {
        if ((i & 1) == 0) {
            Evennum+=i;
        }
    }
}


int main() {

    uint64 start=0,end=2000000000;
    auto startTime=std::chrono::high_resolution_clock::now();
    std::thread t1(findOddnum,start,end);
    std::thread t2(findEvennum,start,end);
    t1.join();
    t2.join();
    //findEvennum(start,end);
    //findOddnum(start,end);
    auto endTime=std::chrono::high_resolution_clock::now();
    auto duration=std::chrono::duration_cast<std::chrono::microseconds>(endTime - startTime);
    std::cout << Oddnum << " " << Evennum << std::endl;
    std::cout << duration.count() << std::endl;
}