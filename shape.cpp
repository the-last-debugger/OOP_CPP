#include <iostream>
using namespace std;

class Shape
{
public:
    void draw() { cout << "Drawing shape\n"; }
};
class Circle : public Shape
{
};
class Square : public Shape
{
};
int main()
{
    Circle c;
    Square s;
    c.draw();
    s.draw();

    return 0;
}
