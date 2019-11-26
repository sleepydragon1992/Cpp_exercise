#include "example1.h"
//Father class
    MyFather::MyFather(string EyeColor, string HairType){
        this->EyeColor = EyeColor;
        this->HairType = HairType;
}
string MyFather::ShowEyeColor(){
    return EyeColor;
}

string MyFather::ShowHairType(){
    return HairType ;
}

long double MyFather::FamilySaving(){
    return FamSaving = 10000L;
}

int MyFather::FamilyCar(){
    return FamCar = 4;
}

//Mother class
MyMother::MyMother(string EyeColor, string HairType){
    this->EyeColor = EyeColor;
    this->HairType = HairType;
}
string MyMother::ShowMotherEye(){
    return EyeColor ;
}

string MyMother::ShowMotherHair(){
    return HairType ;
}

int MyMother::FamilyHouse(){
    return FamHouse = 3;
}

//Me class
    MySelf::MySelf(string Education){
        this->Education = Education;
    }
string MySelf::ShowMyHair(){
    return HairType ;
}

string MySelf::ShowMyEducation(){
    return Education ;
}


//Sister class
string MySister::ShowSisEye(){
    return SisEye ;
}

float MySister::ShowSisAllowance(){
    return MonAllowance = 100.00;
}