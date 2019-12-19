#include <iostream> 
#include <string>
#include <iterator>

using namespace std;

int main () {
    ostream_iterator<int> iterOut(cout);
    ostream_iterator<string> iterOutStr(cout);

    *iterOutStr = "Enter two integers: ";

    istream_iterator<int> iterIn(cin);
    int number1 = *iterIn;
    ++iterIn;
    int number2 = *iterIn;

    *iterOutStr = "You have entered ";
    *iterOut = number1;
    *iterOutStr = " and ";
    *iterOut = number2;
    cout << endl;
}