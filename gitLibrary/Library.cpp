#include "Library.h"

Library::Library()
{
    this->name = "No name";
}

Library::Library(string name)
{
    this->name = name;
}

void Library::setName(string name)
{
    this->name = name;
}

string Library::getName() const
{
    return name;
}

void Library::add(Edition* obj)
{
    library.push_back(obj);
}

void Library::del(int id)
{
    for (int i = 0; i < library.size(); i++)
    {
        if (i == id)
        {
            vector<Edition*>::iterator it;
            it = library.begin() + i;
            library.erase(it);
        }
    }
}

void Library::findByName(string name) const
{
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i]->getName() == name)
        {
            library[i]->showInfo();
        }
    }
}

void Library::findByAuthor(string author) const
{
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i]->getAuthor() == author)
        {
            library[i]->showInfo();
        }
    }
}

void Library::findByYear(int year) const
{
    for (int i = 0; i < library.size(); i++)
    {
        if (library[i]->getYear() == year)
        {
            library[i]->showInfo();
        }
    }
}

void Library::showList() const
{
    for (int i = 0; i < library.size(); i++)
    {
        cout << "\n#" << i + 1 << endl;
        library[i]->showInfo();
    }
}
