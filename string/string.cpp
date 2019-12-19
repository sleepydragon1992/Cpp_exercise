#include <iostream>
#include <string>   // C++ string class
using namespace std;
 
int main() {
   string strLarge("This is a very very very vary large string");
   string strSmall("Hi");
   string strEmpty;
 
   cout << "size=" << strLarge.size() << " capacity=" << strLarge.capacity() << endl;
   cout << "size=" << strSmall.size() << " capacity=" << strSmall.capacity() << endl;
   cout << "size=" << strEmpty.size() << " capacity=" << strEmpty.capacity() << endl;
 
   cout << "string::npos=" << string::npos << endl;
   cout << "max_size=" << strEmpty.max_size() << endl;
 
   strSmall.reserve(100);
   cout << "size=" << strSmall.size() << " capacity=" << strSmall.capacity() << endl;
 
   strLarge.resize(10);
   cout << strLarge << endl;
   cout << "size=" << strLarge.size() << " capacity=" << strLarge.capacity() << endl;
   strSmall.resize(10, '-');
   cout << strSmall << endl;
   cout << "size=" << strSmall.size() << " capacity=" << strSmall.capacity() << endl;
 
   strLarge.clear();
   cout << "size=" << strLarge.size() << " capacity=" << strLarge.capacity() << endl;
   strLarge.shrink_to_fit();   // C++11
   cout << "size=" << strLarge.size() << " capacity=" << strLarge.capacity() << endl;
}