#include <iostream>


using namespace std;
    union MyUnion
    {
        unsigned int iValue[2];
        float fValue;
        double dValue;
    };


int main(void)
{
    MyUnion newUnion;

    
    
    newUnion.iValue[1] = 0x3dcc;
    newUnion.iValue[0] = 0xcccd;
    

    cout << newUnion.fValue << endl;
    cout << newUnion.dValue << endl;
    return 0;
}