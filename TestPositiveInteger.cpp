/* Test Driver for the PositiveInteger class (TestPositiveInteger.cpp) */
#include <iostream>
#include <stdexcept>  // Needed for exception handling
#include "PositiveInteger.h"
using namespace std;
 
int main() {
   // Valid input
   PositiveInteger i1(8);
   cout << i1.getValue() << endl;
 
   // Invalid input without try-catch
// PositiveInteger i2(-8);  // Program terminate abruptly
 
   // Graceful handling of exception with try-catch
   try {
      cout << "begin try 1..." << endl;
      PositiveInteger i3(-8);
         // Exception thrown.
         // Skip the remaining statements in try and jump to catch.
      cout << i3.getValue() << endl;
      cout << "end try 1..." << endl;
         // Continue to the next statement after try-catch, if there is no exception
   } catch (invalid_argument & ex) {  // need <stdexcept>
      cout << "Exception: " << ex.what() << endl;
         // Continue to the next statement after try-catch
   }
   cout << "after try-catch 1..." << endl;
 
   // Graceful handling of exception with try-catch
   try {
      cout << "begin try 2..." << endl;
      PositiveInteger i4(8); // no exception thrown
      cout << i4.getValue() << endl;
      cout << "end try 2..." << endl;
         // Continue to the next statement after try-catch, if there is no exception
   } catch (invalid_argument & ex) {  // need <stdexcept>
      cout << "Exception: " << ex.what() << endl;
         // Continue to the next statement after try-catch
   }
   cout << "after try-catch 2..." << endl;
}