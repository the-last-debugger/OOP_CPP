#include <iostream>
using namespace std;

class Math
{
public:
    int square(int x)
    {
        return x * x;
    }
    inline int cube(int x);
};

inline int Math::cube(int x)
{
    return x * x * x;
}

int main()
{
    Math m;
    cout << "Square: " << m.square(5) << endl;
    cout << "Cube: " << m.cube(3) << endl;

    return 0;
}