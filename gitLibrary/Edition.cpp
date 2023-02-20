#include "Edition.h"

Edition::Edition()
{
	this->name = "No name";
	this->author = "No author";
	this->year = 2023;
}

Edition::Edition(string name, string author, int year)
{
	this->name = name;
	this->author = author;
	this->year = year;
}

void Edition::setName(string name)
{
	this->name = name;
}

void Edition::setAuthor(string author)
{
	this->author = author;
}

void Edition::setYear(int year)
{
	this->year = year;
}

string Edition::getName() const
{
	return name;
}

string Edition::getAuthor() const
{
	return author;
}

int Edition::getYear() const
{
	return year;
}
