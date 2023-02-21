#pragma once
#include "Book.h"
#include "Edition.h"
#include "Magazine.h"
class Library
{
protected:
	string name;
	vector<Edition*> library;
public:
	Library();
	Library(string name);

	void setName(string name);
	string getName()const;

	void add(Edition* obj);
	void del(int id);
	
	void findByName(string name)const;
	void findByAuthor(string author)const;
	void findByYear(int year)const;

	void addArticleForMagazine(int id, string article);

	void showList()const;
};

