#include <iostream> 
#include <string>

using namespace std;

class GradeBook
{
public: 
    explicit GradeBook (string name)
    ::courseName( name)
    {

    }


    
void setCourseName( string name)
    {
        courseName = name;
    }

string getCourseName() const{
    return courseName;
}
void displayMessage() const{
    cout << "welcome to the gradebook for \n" << getCourseName() << "!" <<endl;
    }


};
int main ()
{
    GradeBook gradebook1("CS101");
    GradeBook gradebook2("CS102");

    //cout <<"grade book 1 was created for: " << gradebook1.getCourseName()<< endl;
    //cout <<"grade book 2 was created for: " << gradebook2.getCourseName()<< endl;
    return 0;
}