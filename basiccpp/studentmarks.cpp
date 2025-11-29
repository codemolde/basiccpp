#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int rollno,phy,che,it,total;
    float percentage;
    char name[30],div[10];

    cout << "student name : ";
    cin >> name ;
    cout << "student rollnumber: ";
    cin >> rollno;

    cout << "Enter your physics,chemistry,it marks: ";
    cin >> phy >> che >> it;

    total = phy+ che+it;
    percentage=total/3.0;

    if(percentage>=60){
        strcpy(div,"first");
    }
    else if(percentage<60 && percentage>=48){
        strcpy(div,"second");
    }
    else if (percentage<48 && percentage>=36){
        strcpy(div,"pass");
    }
    else{
        strcpy(div,"fail");
    }
    cout << "your name: " << name <<'\n';
    cout << "your rollnumber: " << rollno << '\n';
    cout << "your physics marks: " << phy << '\n';
    cout << "your chemistry marks: " << che << '\n';
    cout << "ypur information technology marks: " << it << '\n';
    cout << "your total: " << total <<'\n';
    cout << "your percentage: " << percentage << '\n';
    cout << "your division: " << div << '\n';

    return 0;
}