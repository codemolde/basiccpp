#include <iostream>
#include <iomanip>

double converter(double& x,double& y) {
    return x*y;
}

using namespace std;
int main() {
    double num;
    string sym[3] {
        "$","€","₹"
    };
    double rates[3][3] = {
        {1.00, 0.85, 85.2},   // USD to [USD, EUR, INR]
        {1.18, 1.00, 98.3},   // EUR to ...
        {0.012, 0.0102, 1.00} // INR to ...
    };
    int from,to;

    string Avalablecur[3] {"1. USD","2. EUR","3. INR"};

    cout << "List of curruncy : " << endl;
    for(int i=0;i<3;i++) {
        cout << Avalablecur[i] << endl;
    }
    if (cin.fail()) {
        cin.clear();
        cin.ignore(1000,'\n');
        cout << "Enter a valid selection!" << endl;
        exit(0);
    }
    cout << "Select the curruncy you have :" ;
    cin >> from;
    cout  << "Select the curruncy you want to convert :";
    cin >> to;
    cout << "Enter the amount you want to convert: ";
    cin >> num;


    if (from<1||to<1||from>3||to>3) {
        cout<<"Invalid selection"<<endl;
    }
    double exchange = rates[from-1][to-1];
    double result = converter(num,exchange);
    cout << fixed << setprecision(2);
    cout << "Converted result : " << sym[to-1] << result << endl;


    return 0;
}