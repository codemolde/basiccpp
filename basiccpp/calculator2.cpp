#include <iostream>
#include <cmath>
using namespace std;

// Function to handle basic operations (passed by reference!)
void runBasicOps(double &StoredNum) {
    double num;
    char op;

    while (true) {
        cout << "Enter the operation you want (+,-,*,/) or q to quit: ";
        cin >> op;

        if (op == 'q' || op == 'Q') {
            cout << "Thank you for using calculator!" << endl;
            exit(0);  // exit program
        }

        cout << "Enter your second num: ";
        cin >> num;

        switch (op) {
            case '+': StoredNum += num; break;
            case '-': StoredNum -= num; break;
            case '*': StoredNum *= num; break;
            case '/':
                if (num != 0) {
                    StoredNum /= num;
                } else {
                    cout << "Can't divide by 0!" << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Current result: " << StoredNum << endl;
    }
}

int main() {
    double StoredNum = 0;
    char op;
    int power = 0;

    cout << "Enter your first number: ";
    cin >> StoredNum;

    while (true) {
        cout << "\nEnter operation (+,-,*,/, a=advanced, q=quit): ";
        cin >> op;

        if (op == 'q' || op == 'Q') {
            cout << "Thank you for using calculator!" << endl;

            break;
        }

        if (op == 'a' || op == 'A') {
            cout << "Choose advanced operation:\n";
            cout << "s = sin, t = tan, c = cos, r = sqrt, e = power\n";
            cin >> op;

            switch (op) {
                case 's': StoredNum = sin(StoredNum); break;
                case 't': StoredNum = tan(StoredNum); break;
                case 'c': StoredNum = cos(StoredNum); break;
                case 'r': StoredNum = sqrt(StoredNum); break;
                case 'e':
                    cout << "Enter the power: ";
                    cin >> power;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(1000, '\n');
                        cout << "Invalid input. Please enter an integer." << endl;
                    } else {
                        StoredNum = pow(StoredNum, power);  // Corrected from exp
                    }
                    break;
                default:
                    cout << "Invalid advanced operation!" << endl;
            }

            cout << "Result after advanced operation: " << StoredNum << endl;

            // Start basic operations after advanced op
            runBasicOps(StoredNum);
            break;  // if you don’t want to loop again after advanced+basic
        }

        // Normal basic operation block
        double num;
        cout << "Enter your second number: ";
        cin >> num;

        switch (op) {
            case '+': StoredNum += num; break;
            case '-': StoredNum -= num; break;
            case '*': StoredNum *= num; break;
            case '/':
                if (num != 0) {
                    StoredNum /= num;
                } else {
                    cout << "Can't divide by 0!" << endl;
                }
                break;
            default:
                cout << "Invalid operator!" << endl;
        }

        cout << "Current result: " << StoredNum << endl;
    }

    return 0;
}