#ifndef POSITIVE_INTEGER_H
#define POSITIVE_INTEGER_H
class PositiveInteger{
    private:
        int value;
    public:
        PositiveInteger(int value = 1);
        void setValue(int value);
        int getValue() const;
};
#endif