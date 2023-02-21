#pragma once
#include <iostream>
#include <string>
using std::string;
class PublicationException
{
protected:
	string name;
public:
	PublicationException();
	PublicationException(string name);

	virtual string showMessage()const = 0;
};

