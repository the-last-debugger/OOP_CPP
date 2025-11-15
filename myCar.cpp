#include <iostream>
using namespace std;

class Car
{
private:
    int speed;

public:
    Car(int s) { speed = s; }
    void showSpeed() { cout << speed; }
};

Car myCar(120);

int main()
{
    myCar.showSpeed();

    return 0;
}