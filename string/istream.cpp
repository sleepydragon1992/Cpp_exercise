#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>

using namespace std;

int main (void){
    // const int SIZE = 10;
    // char str[SIZE];

    // cout << "enter a word: ";
    // cin >> setw(SIZE) >> str;
    // cout<< str << endl;


    const int SIZE = 30;
    char str[SIZE];    // max strlen is SIZE - 1
    
    cout << "Enter a line: ";
    cin.getline(str, SIZE);     // Read a line (including whitespaces) until newline, discard newline
    cout << "\"" << str << "\" length=" << strlen(str) << endl;
    cout << "Number of characters extracted: " << cin.gcount() << endl;
    
    if (cin.fail()) {
    cout << "failbit is set!" << endl;
    cin.clear();   // Clear all error bits. Otherwise, subsequent getline() fails
    }


}