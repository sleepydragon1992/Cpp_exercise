#include "example1.h"

using namespace std;

int main (void) {
    MyFather Superman;
    MyMother Wonderwoman;
    MySelf   Joe;
    MySister Supergirl;

    cout << "Father profile: " << endl;
    cout << "eyes: " << Superman.ShowEyeColor() << endl;
    cout << "hair: " << Superman.ShowHairType() << endl;
    cout << "family saving: " << Superman.FamilySaving() << endl;
    cout << "family car: " << Superman.FamilyCar() << endl;
    cout << "\n\n";
    
    cout << "Mother profile: " << endl;
    cout << "eyes: " << Wonderwoman.ShowMotherEye() << endl;
    cout << "hair: " << Wonderwoman.ShowMotherHair() << endl;
    cout << "family house: " << Wonderwoman.FamilyHouse() << endl;
    cout << "\n\n";


    cout << "My profile: " << endl;
    cout << "hair: " << Joe.ShowMyHair() << endl;
    cout << "My family saving: " << Joe.FamilySaving() << endl;
    cout << "My family car: " << Joe.FamilyCar() << endl;
    cout << "My Education: " << Joe.ShowMyEducation() << endl;
    cout << "\n\n";

    cout << "My sister profile: " << endl;
    cout << "our family saving: " << Supergirl.FamilySaving() << endl;
    cout << "our family car: " << Supergirl.FamilyCar() << endl;
    cout << "our family house: " << Supergirl.FamilyHouse() << endl;
    
}