#include <stdexcept>
#include "MyDynamicArray.h"

MyDynamicArray::MyDynamicArray (int n) {
    if (n <= 0) {
        throw std::invalid_argument("error: size must be greater than zero");
    }

    size_ = n;
    ptr = new double[size_];
    for (int i = 0; i < size_; ++i){
        ptr[i] = 0.0;
    }
}

MyDynamicArray::MyDynamicArray (const MyDynamicArray & a) {
    size_ = a.size_;
    ptr = new double[size_];
    for (int i = 0; i < size_; ++i){
        ptr[i] = a.ptr[i];
    }
}

MyDynamicArray::MyDynamicArray (const double a[], int n) {
    size_ = n;
    ptr = new double [size_];
    for (int i = 0; i < size_; ++i) {
        ptr[i] = a[i];
    }
}

MyDynamicArray::~MyDynamicArray(){
    delete[] ptr;
}

const MyDynamicArray & MyDynamicArray::operator = (const MyDynamicArray & rhs) {
    if (this != &rhs) {
        if (size_ != rhs.size_) {
            delete [] ptr;
            size_ = rhs.size_;
            ptr = new double[size_];
            for (int i = 0; i < size_; ++i) {
                ptr[i] = rhs.ptr[i];
            }
        }
    }
    return *this;
}


bool MyDynamicArray::operator== (const MyDynamicArray & rhs) const {
   if (size_ != rhs.size_) return false;
 
   for (int i = 0; i < size_; ++i) {
      if (ptr[i] != rhs.ptr[i]) return false;
   }
   return true;
}


bool MyDynamicArray::operator!= (const MyDynamicArray & rhs) const{
    return !(*this == rhs);
}


double MyDynamicArray::operator[] (int index) const {
    if (index < 0 || index >= size_) {
        throw std::out_of_range("error: index out of range");
    }
    return ptr[index];
}

std::ostream & operator<< (std::ostream & out, const MyDynamicArray & a) {
    for (int i = 0; i < a.size_; ++i) {
        out << a.ptr[i] << ' ';
    }
    return out;
}

std::istream & operator>> (std::istream & in, MyDynamicArray & a) {
   for (int i = 0; i < a.size_; ++i) {
      in >> a.ptr[i];
   }
   return in;
}