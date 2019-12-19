/* Header for the PositiveInteger class (PositiveInteger.h) */
#ifndef POSITIVE_INTEGER_H
#define POSITIVE_INTEGER_H
 
class PositiveInteger {
private:
   int value;  // positive integer (>0) only
 
public:
   PositiveInteger(int value = 1);
   void setValue(int value);
   int getValue() const;
};
 
#endif