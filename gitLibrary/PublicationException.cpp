#include "PublicationException.h"

PublicationException::PublicationException()
{
	this->name = "";
}

PublicationException::PublicationException(string name)
{
	this->name = name;
}

BookException::BookException()
{
}

BookException::BookException(string name):PublicationException(name)
{
}

string BookException::showMessage() const
{
	return "Exception(" + name + "): Wrong name, author or article";
}

EditionYearException::EditionYearException(string name, int year):PublicationException(name)
{
	this->year = year;
}

string EditionYearException::showMessage() const
{
	return "Exception(" + name + "): Unable to create publication due to invalid publication year: " + std::to_string(year);
}
