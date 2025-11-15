#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "Some generic animal sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Bark!" << endl;
    }
};

int main()
{
    Dog d1;
    Animal *AnimalPtr = &d1;

    AnimalPtr->sound();

    return 0;
}