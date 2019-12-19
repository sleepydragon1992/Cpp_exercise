#include <bits/stdc++.h>

using namespace std;


vector<int> rot_once(vector<int> a){
    int tempt = a[0];
    for (int i = 0; i< a.size(); i++){
        a[i] = a[i+1];
    }
    int size = a.size();
    a[size-1] = tempt;

    return a;
}

int main (void){
    vector<int> myVector = {1, 2, 3, 4, 5};
    vector<int> myVector2 = rot_once(myVector);
    for (int i = 0; i < myVector2.size() ; i ++){
        cout << myVector2[i] << " ";
    }
        cout << endl;
    return 0;
}