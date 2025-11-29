//
// Created by daksh beniwal on 10/08/25.
//
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>
using namespace std;
#include "ecription_converter.h"

ecription_converter::ecription_converter() {
    //variables
    string encription_character = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+-=";
    string password;
    string size_control="*@$^1U&8PcWL";
    int limit_size=size_control.length();
    vector<string> encrypt_items;
    string line;



    cout << "Enter your password: ";
    cin >> password;
    //fixes the size of password
    if (password.length()<=limit_size) {
        size_t needed_char = limit_size-password.length();
        password+=size_control.substr(0,needed_char);
    }
    //encrypt the password
    for (size_t c = 0; c < password.size(); ++c) {
        int base = int(c * 23 + 24 / 2);

        if (password[c] == 'a')      password[c] = encription_character[base];
        else if (password[c] == 'e') password[c] = encription_character[base + 1];
        else if (password[c] == 'i') password[c] = encription_character[base + 2];
        else if (password[c] == 'o') password[c] = encription_character[base + 3];
        else if (password[c] == 'u') password[c] = encription_character[base + 4];
        else if (password[c] == 'y') password[c] = encription_character[base + 5];
        else if (password[c] == 't') password[c] = encription_character[base + 6];
        else if (password[c] == 'r') password[c] = encription_character[base + 7];
        else if (password[c] == 'n') password[c] = encription_character[base + 8];
        else if (password[c] == 'm') password[c] = encription_character[base + 9];
        else if (password[c] == 's') password[c] = encription_character[base + 10];
        else if (password[c] == 'x') password[c] = encription_character[base + 11];
        else if (password[c] == 'v') password[c] = encription_character[base + 12];
        else if (password[c] == 'b') password[c] = encription_character[base + 13];
        else if (password[c] == 'c') password[c] = encription_character[base + 14];
        else if (password[c] == 'd') password[c] = encription_character[base + 15];
        else if (password[c] == 'f') password[c] = encription_character[base + 16];
        else if (password[c] == 'g') password[c] = encription_character[base + 17];
        else if (password[c] == 'h') password[c] = encription_character[base + 18];
        else if (password[c] == 'j') password[c] = encription_character[base + 19];
        else if (password[c] == 'k') password[c] = encription_character[base + 20];
        else if (password[c] == 'l') password[c] = encription_character[base + 21];
        else if (password[c] == 'q') password[c] = encription_character[base + 22];
        else if (password[c] == 'p') password[c] = encription_character[base + 23];
        else if (password[c] == 'z') password[c] = encription_character[base + 24];
        else if (password[c] == 'w') password[c] = encription_character[base + 25];

        // Uppercase version continuation
        else if (password[c] == 'A') password[c] = encription_character[base + 26];
        else if (password[c] == 'E') password[c] = encription_character[base + 27];
        else if (password[c] == 'I') password[c] = encription_character[base + 28];
        else if (password[c] == 'O') password[c] = encription_character[base + 29];
        else if (password[c] == 'U') password[c] = encription_character[base + 30];
        else if (password[c] == 'Y') password[c] = encription_character[base + 31];
        else if (password[c] == 'T') password[c] = encription_character[base + 32];
        else if (password[c] == 'R') password[c] = encription_character[base + 33];
        else if (password[c] == 'N') password[c] = encription_character[base + 34];
        else if (password[c] == 'M') password[c] = encription_character[base + 35];
        else if (password[c] == 'S') password[c] = encription_character[base + 36];
        else if (password[c] == 'X') password[c] = encription_character[base + 37];
        else if (password[c] == 'V') password[c] = encription_character[base + 38];
        else if (password[c] == 'B') password[c] = encription_character[base + 39];
        else if (password[c] == 'C') password[c] = encription_character[base + 40];
        else if (password[c] == 'D') password[c] = encription_character[base + 41];
        else if (password[c] == 'F') password[c] = encription_character[base + 42];
        else if (password[c] == 'G') password[c] = encription_character[base + 43];
        else if (password[c] == 'H') password[c] = encription_character[base + 44];
        else if (password[c] == 'J') password[c] = encription_character[base + 45];
        else if (password[c] == 'K') password[c] = encription_character[base + 46];
        else if (password[c] == 'L') password[c] = encription_character[base + 47];
        else if (password[c] == 'Q') password[c] = encription_character[base + 48];
        else if (password[c] == 'P') password[c] = encription_character[base + 49];
        else if (password[c] == 'Z') password[c] = encription_character[base + 50];
        else if (password[c] == 'W') password[c] = encription_character[base + 51];

        // Numbers & symbols
        else if (password[c] == '1') password[c] = encription_character[base + 52];
        else if (password[c] == '2') password[c] = encription_character[base + 53];
        else if (password[c] == '3') password[c] = encription_character[base + 54];
        else if (password[c] == '4') password[c] = encription_character[base + 55];
        else if (password[c] == '5') password[c] = encription_character[base + 56];
        else if (password[c] == '6') password[c] = encription_character[base + 57];
        else if (password[c] == '7') password[c] = encription_character[base + 58];
        else if (password[c] == '8') password[c] = encription_character[base + 59];
        else if (password[c] == '9') password[c] = encription_character[base + 60];
        else if (password[c] == '0') password[c] = encription_character[base + 61];
        else if (password[c] == '!') password[c] = encription_character[base + 62];
        else if (password[c] == '@') password[c] = encription_character[base + 63];
        else if (password[c] == '#') password[c] = encription_character[base + 64];
        else if (password[c] == '$') password[c] = encription_character[base + 65];
        else if (password[c] == '%') password[c] = encription_character[base + 66];
        else if (password[c] == '^') password[c] = encription_character[base + 67];
        else if (password[c] == '&') password[c] = encription_character[base + 68];
        else if (password[c] == '*') password[c] = encription_character[base + 69];
        else if (password[c] == '(') password[c] = encription_character[base + 70];
        else if (password[c] == ')') password[c] = encription_character[base + 71];
        else if (password[c] == '_') password[c] = encription_character[base + 72];
        else if (password[c] == '+') password[c] = encription_character[base + 73];
        else if (password[c] == '-') password[c] = encription_character[base + 74];
        else if (password[c] == '=') password[c] = encription_character[base + 75];
    }

    cout << "Encrypted password: " << password << endl;


    //stores the password
    ofstream encrypted_file("password.txt",ios::app);

    if (encrypted_file.is_open()) {
        encrypted_file << password << endl;
        encrypted_file.close();
    }
    ifstream inFile("password.txt");

    //write the password in vector string
    if (inFile.is_open()) {
        while (getline(inFile,line)) {
            if (!(line.empty()))
                encrypt_items.push_back(line);
        }
        inFile.close();
    }
    for (int i=0;i<encrypt_items.size();i++) {
        cout << encrypt_items[i] << endl;
    }
    //randomly suffle the passwords
    random_device rd;
    mt19937_64 g(rd());
    shuffle(encrypt_items.begin(),encrypt_items.end(),g);

    //rewrite the file
    ofstream outFile("password.txt",ios::trunc);
    if (outFile.is_open()) {
        for (int i=0;i<encrypt_items.size();i++) {
            outFile << encrypt_items[i] << endl;
        }
        outFile.close();
    }
    cout << "saved succesfully" << endl;
}

