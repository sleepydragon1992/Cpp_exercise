#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void print(const vector<int> & v);

int main() {
    const int SIZE = 10;
    vector<int> numbers(SIZE);

    cout << "size = " << numbers.size() << endl;
    cout << "capacity = " << numbers.capacity() << endl;
    for (auto i = numbers.begin(); i!= numbers.end(); ++i){
        cout << *i << ' ';
    }
    cout << endl;

    srand(time(0));
    for (size_t i = 0; i < numbers.size(); ++i) {
        numbers.at(i) = rand() % 100;
    }
    for (auto i = numbers.begin(); i!= numbers.end(); ++i){
        cout << *i << ' ';
    }
    cout << "First element is " << numbers.front() << endl;
   cout << "Last element is " << numbers.back() << endl;
 
   // [] does not perform index bound check, but at() does
   cout << numbers[55] << endl;    // no error compile and run
    // cout << numbers.at(55) << endl; // runtime out_of_range exception
   return 0;
}
 
    // Print the content of this vector using indexing operator []
    void print(const vector<int> & v) {
    for (int i = 0; i < v.size(); ++i) {
      cout << v[i] << " ";  // no bound check, but safe here
    }
    cout << endl;
}