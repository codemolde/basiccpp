#include "vowels_test.h"
#include <iostream>
using namespace std;

int main() {
    char ch;
    char c[]{'a','i','e','o','u','A','E','I','O','U'};
    cout << "enter a letter : " << endl;
    cin >> ch;
    bool check = false;
    for (char v:c) {
        if (ch == v) {
            check = true;
            break;
        }

    }
    if (check) {
        cout << ch << " is vowel" << endl;
    }
    else {
        cout << ch << " is not vowel" << endl;
    }

    return 0;
}
