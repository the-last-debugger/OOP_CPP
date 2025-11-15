#include <iostream>
using namespace std;

class Grandparent
{
public:
    void legacy() { cout << "Family legacy\n"; }
};
class Parent : public Grandparent
{
public:
    void guide() { cout << "Parental guidance\n"; }
};
class Child : public Parent
{
public:
    void play() { cout << "Child playing\n"; }
};
int main()
{
    Child c;
    c.legacy();
    c.guide();
    c.play();
    return 0;
}