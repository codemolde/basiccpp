#include <iostream>

using namespace std;

int main() {
    int *number{nullptr};
     number = new int(12);
    if (number != nullptr) {
        cout<<"Memory allocation succsesful"<<endl;
    }
    else {
        cout<<"Memory allocation failed"<<endl;
    }
    cout << *number << endl;
    cout << "Hello World!" << endl;
    delete number;
    number = nullptr;
    return 0;
}