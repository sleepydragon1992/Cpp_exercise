#ifndef MY_COMPLEX_H
#define MY_COMPLEX_H

#include <iostream>

template <typename T> class MyComplex;

template <typename T> 
std::ostream & operator << (std::ostream & out, const MyComplex<T> & c);

template <typename T>
std::istream & operator >> ( std::istream & in, MyComplex<T> & c);

template <typename T> 
class MyComplex {
    private:
        T real, imag;

    public:
        explicit MyComplex<T> (T real = 0, T imag = 0) : real(real), imag(imag) { }

        
}