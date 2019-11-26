#include <iostream>
#include <string> 

using namespace std;

class MySpecialArray{
    private:
        int *a = NULL;
    public:
        void set_random_array();
        int * get_array();
};