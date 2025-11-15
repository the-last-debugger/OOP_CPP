#include <iostream>
using namespace std;

class Vehicle
{

public:
    void display()
    {
        cout << "This is a vehicle." << endl;
    }
};

class Car : public Vehicle
{
};

int main()
{
    Car c1;
    c1.display();

    return 0;
}