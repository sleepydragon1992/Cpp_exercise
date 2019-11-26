#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main (void) {
    string str1("hello world");
    string str2 = "hello world";
    cout << str1 << " " << str2 << endl;

    char cstr[] = "Hello world!";

    string s1;
    cout << s1.length() << endl;
    cout << s1.size() << endl;

    string s4(cstr);
    s4[15] = 'E';
    cout << s4 << endl;

    string s2(s4);
    s2.at(0) = 'H';
    cout << s2 << endl;

    string s3a(s4, 2);
    cout << s3a << endl;
    s3a = s3a + "again";
    cout << s3a << endl;

    string s3b(s3a, 4, 3);
    cout << s3b << endl;

    string s5a(cstr, strlen(cstr));
    cout << s5a << endl;
    string s5b(cstr, 25);
    cout << s5b << endl;

    string s6(5, '$');
    cout << s6 << endl;

    string s7a(cstr, cstr + 4);
    cout << s7a << endl;

    string s7d(s4.begin(), s4.end());
    cout << s7d << endl;
    
}