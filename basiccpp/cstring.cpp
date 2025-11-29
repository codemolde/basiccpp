#include <iostream>
#include <cstring>
using namespace std;
int main() {

    const char str[]{"isioimn oiasjj oajj ojjao "};
    const char *a{str};
    cout << "str Lenth :" << strlen(str) << endl;
    cout << "size :" << sizeof(str) << endl;
    cout << "ptr str lenght :" << strlen(a) << endl;
    cout << "ptr size :" << sizeof(a) << endl;


    return 0;
}