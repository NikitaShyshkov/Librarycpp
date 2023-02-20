#include "Library.h"

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
	a.add(new Magazine("News", "1+1", 2022));
	a.add(new Book("C++","Microsoft",2002,"This book good for noobs"));
	a.showList();

	return 0;
}