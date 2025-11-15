#include <iostream>

class Student
{
private:
    std::string name;
    int marks;

public:
    Student(std::string n, int m)
    {
        this->name = n;
        this->marks = m;
        std::cout << "Constructor called for " << this->name << std::endl;
    }

    ~Student()
    {
        std::cout << "Destructor called for " << this->name << std::endl;
    }

    void display()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Marks: " << marks << std::endl;
    }
};

int main()
{
    {
        Student s1("Sam", 99);
        s1.display();
    }

    Student s2("Jane", 66);
    s2.display();

    return 0;
}