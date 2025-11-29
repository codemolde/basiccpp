#include <iostream>
int searcharry(int array[],int size,int element);
int main(){
    int number[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(number)/sizeof(number[0]);
    int index;
    int num;
    std::cout << "Enter your search num: ";
    std::cin >> num;
    index=searcharry(number,size,num);
if(index!=-1){
  std::cout << num << " is at index " << index;
}
else{
  std::cout << "this is not in arry";
}

    return 0;
}
int searcharry(int array[],int size,int element){
      for(int i=0;i<size;i++){
        if(array[i]==element){
return i;
        }
           }
                return -1;
}