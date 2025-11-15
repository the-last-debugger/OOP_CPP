#include <iostream>
using namespace std;
class Student
{
private:
    int id;

public:
    void setId(int i)
    {
        id = i;
    }
    void showId()
    {
        cout << "ID:" << id << endl;
    }
};
int main()
{
    // Dynamically create an array of 3 Student objects
    Student *arr = new Student[3];
    // Assign values
    for (int i = 0; i < 3; i++)
    {
        arr[i].setId(i + 1);
    }
    // Display values
    for (int i = 0; i < 3; i++)
    {
        arr[i].showId();
    }
    delete[] arr; // Free allocated memory
}