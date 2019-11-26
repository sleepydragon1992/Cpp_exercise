#ifndef MY_DYNAMIC_ARRAY_H
#define MY_DYNAMIC_ARRAY_H

#include <iostream>

class MyDynamicArray {
    private:
        int size_;
        double * ptr;
    public:
        explicit MyDynamicArray (int n = 8);
        explicit MyDynamicArray (const MyDynamicArray & a);
        MyDynamicArray ( const double a[], int n);
        ~MyDynamicArray();

        const MyDynamicArray & operator = (const MyDynamicArray & rhs);
        bool operator== (const MyDynamicArray & rhs) const;
        bool operator!= (const MyDynamicArray & rhs) const;

        double operator[] (int index) const;
        double & operator[] (int index); 

        int size() const {
            return size_;
        }
        friend std::ostream & operator << (std::ostream & out, const MyDynamicArray & a);
        friend std::istream & operator >> (std::istream & in, MyDynamicArray & a);
};

#endif