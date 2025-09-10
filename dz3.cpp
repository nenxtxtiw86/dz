#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>

using namespace std;

struct thechemicalelement
{
	string title;
	string symbol;
	int sequencenumber;
	double atomicmass;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "введите количество химических элемент" << endl;
	cin >> N;

	cin.ignore();
	thechemicalelement* element = new thechemicalelement[N];
	for (int i = 0;i < N;i++)
	{
		cout << "введите название " << i + 1 << " -го химического элемента " << endl;
		getline(cin,element[i].title);
		cout << "введите символ " << i + 1 << " -го химического элемента " << endl;
		getline(cin, element[i].symbol);
		cout << "введи порядковый номер " << i + 1 << " -го химического элемента" << endl;
		cin >> element[i].sequencenumber;
		cout << "введи атомную массу " << i + 1 << " -го химического элемента" << endl;
		cin >> element[i].atomicmass;
		cin.ignore();
	}
	cout << "все химические элементы" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << setw(5) << "химический элемент " << i + 1 << " -ый  " << endl;
		cout << setw(5) << "название " << element[i].title << endl;
		cout << setw(5) << "символ " << element[i].symbol << endl;;
		cout << setw(5) << "порядковый номер " << element[i].sequencenumber << endl;
		cout << setw(5) << "атомная масса " << element[i].atomicmass << endl;
		cout << endl;
	}

}
