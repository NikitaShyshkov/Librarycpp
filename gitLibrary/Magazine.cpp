#include "Magazine.h"

Magazine::Magazine()
{
}

Magazine::Magazine(string name, string author, int year):Edition(name, author, year)
{
}

void Magazine::addArticle(string article)
{
    this->articles.push_back(article);
}

void Magazine::showArticles() const
{
	for (int i = 0; i < articles.size(); i++)
	{
        cout << "- ";
		cout << articles[i] << endl;
	}
}

void Magazine::showInfo() const
{
    cout << type() << ": " << name << endl;
    cout << "\tby " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Articles: " << endl;
    showArticles();
}

string Magazine::type() const
{
    return "Magazine";
}
