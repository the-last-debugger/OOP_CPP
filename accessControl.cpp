#include <iostream>
using namespace std;

class Person
{
protected:
    int age = 25;
};
class Student : public Person
{
public:
    void showAge()
    {
        cout << "Age=" << age << endl;
    }
};
int main()
{
    Student s;
    s.showAge();
    return 0;
}