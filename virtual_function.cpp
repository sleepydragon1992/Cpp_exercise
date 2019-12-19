#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person (){

        }
        void set_name(string name){
            this->name = name;
        }
        void set_age( int age){
            this->age = age;
        }
        const string get_name(){
            return name;
        }
        const int get_age(){
            return age;
        }
        virtual void getdata(){
        }
        virtual void putdata(){
        }
};

class Professor : public Person {
    protected: 
        int publications;
        int cur_id;
    public:
        Professor(){}
        ~Professor(){}
        void getdata(){
            cin >> name;
            cin >> age;
            cin >> publications;          
        }
        void putdata(){
            cout << name << age << publications << cur_id << endl;
        }
};

class Student  : public Person {
    protected:
        int mark[];
        int cur_id;
    public:
        void getdata(){
            cin >> name;
            cin >> age;
            for ( int k = 0; k <= 6; k++){
                cin >> mark[k];
            }
        }
        void putdata(){
            cout << name << age << sum_marks() << cur_id << endl;
        }
        int sum_marks(){
            int sum = 0;
            for ( int k = 0; k <= 6; k++){
                sum = sum + mark[k];
            }
            return sum;
        }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
