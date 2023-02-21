#include "Library.h"
#include "PublicationException.h"

int main()
{
	/*Book a;
	Magazine b;
	a.showInfo();
	cout << "\n\n";
	b.addArticle("Article 1");
	b.addArticle("Article 2");
	b.addArticle("Article 3");
	b.showInfo();*/
	Library a("Luxor");
	a.add(new Magazine("News", "1+1", 2022));//для добавления статей нужно вызвать метод добавления
	a.add(new Book("C++", "Microsoft", 2002, "This book good for noobs"));
	a.addArticleForMagazine(0, "Today the weather is good");
	a.addArticleForMagazine(0, "ZSU TOP");
	try
	{
		a.add(new Book("", "Microsoft", 2002, "This book good for noobs"));//ошибка
	}
	catch (const PublicationException* obj)
	{
		cout << obj->showMessage() << endl;
	}
	try
	{
		a.add(new Book("qweqweq", "", 2002, "This book good for noobs"));//ошибка
	}
	catch (const PublicationException* obj)
	{
		cout << obj->showMessage() << endl;
	}
	try
	{
		a.add(new Book("qweqweq", "qweq", -221, "This book good for noobs"));//ошибка
	}
	catch (const PublicationException* obj)
	{
		cout << obj->showMessage() << endl;
	}
	a.showList();

	return 0;
}