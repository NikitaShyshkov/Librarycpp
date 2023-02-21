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
	return "Exception(" + name + "): wrong name or author";
}
