#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>

using namespace std;

struct books
{
	string title;
	string author;
	int numberofpages;
	int yearofpublicati;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "введи количество книг" << endl;
	cin >> N;
	cin.ignore();
	books* book = new books[N];
	for (int i = 0;i < N;i++)
	{
		cout << "введи название " << i + 1 << " -ой книги" << endl;
	    getline(cin, book[i].title);
		cout << "введи автора " << i + 1 << " -ой книги" << endl;
		getline(cin, book[i].author);
		cout << "введи количество страниц " << i + 1 << " -ой книги" << endl;
		cin>> book[i].numberofpages;
		cout << "введи год издания " << i + 1 << " -ой книги" << endl;
		cin >> book[i].yearofpublicati;
		cin.ignore();

	}
	cout << "все книги" << endl;
	for (int i = 0;i < N;i++)
	{
		
		cout << setw(5) << "книга " << i + 1 << " -я  " << endl;
		cout << setw(5) << "название " << book[i].title  << endl;
		cout << setw(5) << "автор " << book[i].author << endl;;
		cout << setw(5) << "количество страниц " << book[i].numberofpages << endl;
		cout << setw(5) << "год издания " << book[i].yearofpublicati  << endl;
		cout << endl;
	}

}

