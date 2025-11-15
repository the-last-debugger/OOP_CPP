#include <iostream>

class Book
{
private:
    std::string title;
    int price;

public:
    Book(std::string t, int p)
    {
        this->title = t;
        this->price = p;
    }

    Book()
    {
        std::cout << "Default constructor called" << std::endl;
        this->title = "";
        this->price = 0;
    }

    void display()
    {
        std::cout << "Title: " << title << std::endl
                  << "Price: " << price << std::endl;
    }
};

int main()
{
    Book b("Harry Potter", 1998);
    b.display();
    return 0;
}