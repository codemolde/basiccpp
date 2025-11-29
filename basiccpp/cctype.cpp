#include <ctype.h>
#include <iostream>
using namespace std;
int main() {
    char input{'a'};
    char input_2{'*'};
    char input_3[]{"sdni winx  12  csi (*&gy"};
    char input_4[]{"sabasbjabscb"};
    size_t blank_count{};
    cout << "______________________________________" << endl;
    cout <<  "Is alphanumeric :" << isalnum(input) << endl;
    cout <<  "Is alphanumeric :" << isalnum(input_2) << endl;
    cout << "______________________________________" << endl;
    if (isalnum(input)==true) {
      cout << "Is alphanumeric " << endl;

    }
    else {
        cout << "Is not alphanumeric " << endl;
    }
    cout << "______________________________________" << endl;
    if (isalnum(input_2)==true) {
        cout << "Is alphanumeric " << endl;

    }
    else {
        cout << "Is not alphanumeric " << endl;
    }
    cout << "______________________________________" << endl;
    cout << "is alphabetic : " << isalpha(input) << endl;
    cout << "is alphabetic : " << isalpha(input_2) << endl;
    cout << "______________________________________" << endl;
    for (int i=0;i<sizeof(input_3);++i) {
        if (isblank(input_3[i])==true) {
            cout << "Is blank at :" << i << endl;
            ++blank_count;
        }
        else if (isalpha(input_3[i])==true) {
            cout << "Is alphabet at :" << i << endl;
        }
        else if (isdigit(input_3[i])==true) {
            cout << "Is digit at :" << i << endl;
        }
        else if (isspace(input_3[i])==true) {
            cout << "Is space at :" << i << endl;
        }
        else if (iscntrl(input_3[i])==true) {
            cout << "Is control at :" << i << endl;
        }
        else if (isspecial(input_3[i])==true) {
            cout << "Is special at :" << i << endl;
        }
    }
    cout << "There are " << blank_count << " total blank" << endl;
        cout << "______________________________________" << endl;

    for (int i =0;i<size(input_4);++i) {
        input_4[i]=toupper(input_4[i]);
    }
    cout << input_4 << endl;

    return 0;
}