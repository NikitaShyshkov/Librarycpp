#pragma once
#include "Edition.h"
#include <vector>
using std::cout;
using std::endl;
using std::vector;
class Magazine : public Edition
{
protected:
	vector<string>articles;
public:
	Magazine();
	Magazine(string name, string author, int year);

	void addArticle(string article);
	
	void showArticles()const;
	void showInfo()const;
	string type()const override;
};

