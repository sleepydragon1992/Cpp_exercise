#include <iostream>
using namespace std;

class Counter { 
    private:
        int count;
    public:
        explicit Counter (int c= 0) : count(c) {

        }
        int getCount() const {
            return count;
        }
        void setCount(int c){
            count = c;
        }
};

int main() {
    Counter c1;
    cout << c1.getCount() << endl;

    c1 = (Counter)9;
    cout << c1.getCount() << endl;
}