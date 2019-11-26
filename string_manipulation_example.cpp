#include <cctype>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main(void) {
    char mychar = 'S';

    // cout << isalpha(mychar) << endl;
    // cout << isdigit(mychar) << endl;
    // cout << isalnum(mychar) << endl;
    // cout << isupper(mychar) << endl;
    // cout << islower(mychar) << endl;
    // cout << tolower(mychar) << endl;


    char const * mystring = "sleepy";
    cout << strlen(mystring) << endl;
    char const * mystring_2 = "sleepy2";
    cout << strncmp(mystring_2,mystring, 7) << endl;

    string str1("apple");
    cout << str1 << endl;

}