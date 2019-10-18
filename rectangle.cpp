#include <iostream>

using namespace std;

class Rectangle{
    private:
        float a;
        float b;
    public: 
    Rectangle(float a = 2.0, float b = 3.0){}
    
    float area(){
        return a*b;
        }
};

int main (void){
    Rectangle my_rectangle;
    cout << my_rectangle.area() << endl;

    return 0;
}