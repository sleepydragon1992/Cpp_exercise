#include <iostream>
#include <string>
using namespace std;

class MyFather{
    protected:
        string EyeColor;
        string HairType;
        long double FamSaving;
        int FamCar;

    public:
        MyFather(string EyeColor = "Blue", string HairType = "Bald");
        string ShowEyeColor();
        string ShowHairType();
        long double FamilySaving();
        int FamilyCar();
};

class MyMother{
    protected:
        string EyeColor;
        string HairType;
        int FamHouse;

    public:
        MyMother(string EyeColor = "Brown", string HairType = "Curly Blonde");
        ~MyMother(){}
        string ShowMotherEye();
        string ShowMotherHair();
        int FamilyHouse();
};

class MySelf:public MyFather{
    string HairType;
    string Education;

    public:
        MySelf(string Education = "Post Grad");

        string ShowMyHair();
        string ShowMyEducation();
};

class MySister:public MyFather, public MyMother {
    string SisEye;
    float MonAllowance;

    public:
        MySister(){}
        ~MySister(){}
        string ShowSisEye();
        float ShowSisAllowance();
};