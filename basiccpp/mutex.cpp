//
// Created by daksh beniwal on 09/02/26.
//
#include <iostream>
#include <thread>
#include <mutex>

int Amount=0;
std::mutex mtx;

void worker() {
    mtx.lock();
    Amount++;
    mtx.unlock();
}

int main() {
    std::thread t1(worker);
    std::thread t2(worker);

    t1.join();
    t2.join();


    std::cout << Amount << std::endl;
    return 0;
}