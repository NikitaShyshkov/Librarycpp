#pragma once
#include "Edition.h"
class Book : public Edition
{
protected:
	string resume;
public:
	Book();
	Book(string name, string author, int year, string resume);

	void setResume(string resume);
	string getResume()const;

	void showInfo()const override;
	string type()const override;
};

