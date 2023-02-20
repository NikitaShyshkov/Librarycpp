#include "Book.h"

Book::Book()
{
    this->resume = "nothing";
}

Book::Book(string name, string author, int year, string resume):Edition(name, author, year)
{
    this->resume = resume;
}

void Book::setResume(string resume)
{
    this->resume = resume;
}

string Book::getResume() const
{
    return resume;
}

void Book::showInfo() const
{
    cout << type() << ": " << name << endl;
    cout << "\tby " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Resume: " << resume << endl;
}

string Book::type() const
{
    return "Book";
}
