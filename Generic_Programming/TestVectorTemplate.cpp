#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print (const vector<int> & v);

int main (){
    vector<int> v1(5);
    for ( int i = 0; i < v1.size(); ++i) {
        v1[i] = (i+1) * 2;
    }

    for (int i = 0; i < v1.size(); ++i) {
        cout << v1.at(i) << " "; 
    }
    cout << " \n\n";

    vector<string> v3;
    v3.push_back("A for Apple");
    v3.push_back("B for Boy");
    for (int i = 0; i< v3.size(); ++i) {
        cout << v3[i] << " " << endl;
    }
}