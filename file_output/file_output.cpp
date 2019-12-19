#include <fstream>
#include <iostream>

using namespace std;

int main(){
 string line;
  ifstream myfile ("dummy.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line ;
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 

  return 0;
}