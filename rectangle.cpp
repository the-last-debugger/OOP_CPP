#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    int area();
};

inline int Rectangle::area()
{
    return length * width;
};

int main()
{
    Rectangle r1(5, 10);
    cout << "Area: " << r1.area();
    return 0;
}
