#include<bits/stdc++.h>
#include <iostream>
using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box
class Box{
    private:
        int l;
        int b;
        int h;
    public:
// The class should have the following functions : 
    Box (int l = 0, int b = 0, int h = 0) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);

    const int getLength(){
        return l;
    }
    const int getBreath(){
        return b;
    }
    const int getHeight(){
        return h;
    }
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height

    long long CalculateVolume(){
        return l*b*h;
    }
// long long CalculateVolume(); // Return the volume of the box

    bool operator<(Box& B){
        Box A;
        if (A.l < B.l) {
            return true;
        }
        else if ((A.l == B.l) && (A.b < B.b)){
            return true;
        }
        else if ((A.l == B.l) && (A.b == B.b) && (A.h < B.h)){
            return true;
        }
        else {
            return false;
        }
    }
//Overload operator < as specified
//bool operator<(Box& b)

    ostream& operator<<(ostream& out, Box& B){
        out << B.l << " " << B.b << " " << B.h << endl;
        return out;
    }
//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
};

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}