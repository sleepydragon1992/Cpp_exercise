#include <iostream>
#include <math.h>

using namespace std;

class X {
    private:
        int private_X;

    public:
        X(){

        }
    void  set_private_X(int pX){
            this->private_X = pX;
        }
    int get_private_X(){
        return private_X;
    }
};

int main (void) {
    X myX;
    myX.set_private_X(15);
    cout << myX.get_private_X() << endl;
}