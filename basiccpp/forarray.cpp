#include <iostream>

int main(){
std::string classname[]={"naitik","tejender","vatsal","dhruv","kumud","harsh","sumit","sparsh","varun","balu","vandita"};
int rolln[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
for(int i=0;i<sizeof(classname)/sizeof(std::string);i++){
std::cout << rolln[i] << ". "<<classname[i] << '\n';
}



    return 0;
}