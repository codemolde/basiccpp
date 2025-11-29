#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string getpassword(int lenght){
    string password="";
    string character="qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM1234567890";
    int charsize=character.size();
    srand(time(0));
    int randindex;
    for(int i = 0; i<lenght; i++){
        randindex=rand()%charsize;
        password=password+character[randindex];
    }
    return password;
}
int main(){

int lenght;
    cout << "Enter your password lenght: ";
    cin >> lenght;
    string password= getpassword(lenght);
    cout << "Genrated password: " << password;
    return 0;

}