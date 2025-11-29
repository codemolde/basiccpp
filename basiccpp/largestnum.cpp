#include <iostream>
using namespace std;
int main() {
    int n=10;
    int num;
    int largest;
    cout << "enter your num1 \n";
    cin >> largest;
    for (int i =2;i<=n;++i) {
        cout << "enyter your num" << i << endl;
        cin >> num;
        if (num > largest) {
            largest = num;

        }
    }
    cout << "largest num is " << largest << endl;
    return 0;
}