/* Header for the MyException class (MyException.h) */
#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H
 
#include <stdexcept>
 
class MyException : public std::logic_error {
public:
   // Constructor
   MyException() : std::logic_error("my custom error") { };
};
 
#endif 