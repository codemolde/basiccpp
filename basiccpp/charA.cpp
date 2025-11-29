#include <iostream>
using namespace std;
int main() {
    string abd;
    char message[] {"abcdefghijlstuvwxyz"
};
    cout<<message[0]<<endl;
    int abc [9]{1,2,3,4,5,6,7,8,9};
    cout<<abc[2]<<endl;
    for(int i=0;i<9;i++) {
        cout<<abc[i]<<endl;
    }
cout << sizeof(message)/sizeof(int) << endl;
    cin >> abd;
    cout << "enter your user name : \n";
cout << abd << endl;
    return 0;
}