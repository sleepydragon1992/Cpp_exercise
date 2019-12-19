#include <iostream>
#include <string>
#include <iterator>
#include <vector>
using namespace std;
 

void print(vector<int> const &input){
    copy(input.begin(),input.end(), ostream_iterator<int>(cout, " "));
}


int main() {
    const int SIZE = 10;
    int array[SIZE] = {11, 55, 44, 33, 88, 99, 11, 22, 66, 77};
    vector<int> v(array, array + SIZE);
    vector<int> v2(SIZE);
    copy(array, array + SIZE, v2.begin());
    print(v);
    cout << endl;
    print(v2);

    ostream_iterator<string> myString(cout);  
    *myString = "\nThis is a really long string isn't it? \n";


}