#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Entity {
public:
    Entity()
    {
        cout << "Created Entity!" << endl;
    }

    ~Entity()
    {
        cout << "Destroyed Entity!" << endl;
    }
    void Print(){}
};

int main (){
{
    std::unique_ptr<Entity> entity = std::make_unique<Entity>();
    std::unique_ptr<Entity> e0 = entity;
}

    cin.get();
}
