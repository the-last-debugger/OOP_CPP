#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string studentID;
    string name;
    string course;
    float marks;

public:
    void inputData()
    {
        cout << "Enter Student ID: ";
        cin >> studentID;
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Course: ";
        getline(cin, course);
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData()
    {
        cout << studentID << " " << name << " "
             << course << " " << marks << " Grade: "
             << calculateGrade() << endl;
    }

    char calculateGrade()
    {
        if (marks >= 80)
            return 'A';
        else if (marks >= 70)
            return 'B';
        else if (marks >= 60)
            return 'C';
        else if (marks >= 50)
            return 'D';
        else
            return 'F';
    }

    float getMarks() { return marks; }
};

int main()
{
    Student s[5];
    int totalAbove70 = 0;

    cout << "Enter details for 5 students:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        s[i].inputData();
    }

    cout << "Student Records\n";
    for (int i = 0; i < 5; i++)
    {
        s[i].displayData();
        if (s[i].getMarks() > 70)
            totalAbove70++;
    }

    cout << "Above 70: " << totalAbove70 << endl;
    return 0;
}
