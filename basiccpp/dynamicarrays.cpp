#include <iostream>

int main() {
    size_t size{10};
    double *arr{new double[size]};
    double *arr1{new(std::nothrow) double[size]{}};
    int *arr2{new(std::nothrow) int[size]{1,2,3,4,5}};
  for (int i = 0; i < size; i++) {

      std::cout << arr[i] << " " << arr1[i] << " " << arr2[i] << std::endl;

  }
    delete[] arr;
    arr =nullptr;
    delete[] arr1;
    arr1 = nullptr;
    delete[] arr2;
    arr2 = nullptr;
    return 0;
}