#pragma once
#include <iostream>
#include <string>
using std::string;
class Edition
{
protected:
	string name;
	string author;
	int year;
public:
	Edition();
	Edition(string name, string author, int year);

	void setName(string name);
	void setAuthor(string author);
	void setYear(int year);

	string getName()const;
	string getAuthor()const;
	int getYear()const;

	virtual void showInfo()const = 0;
	virtual string type()const = 0;
};

