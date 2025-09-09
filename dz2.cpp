#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <string>

using namespace std;

struct thecircle
{
    double coordinatesofthecenter1;
	double coordinatesofthecenter2;
	double radius;
	string colour;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N;
	cout << "введи количество окружностей" << endl;
	cin >> N;

	cin.ignore();
	thecircle* circle = new thecircle[N];
	for (int i = 0;i < N;i++)
	{
		cout << "введите координаты центра " << i + 1 << " -ой окружности " << endl;
		cin >> circle[i].coordinatesofthecenter1;
		cin >> circle[i].coordinatesofthecenter2;
		cout << "введи радиус " << i + 1 << " -ой окружности" << endl;
		cin>> circle[i].radius;
		cout << "введи цвет " << i + 1 << " -ой окружности" << endl;
		cin.ignore();
		getline(cin, circle[i].colour);
		

	}
	cout << "все окружности" << endl;
	for (int i = 0;i < N;i++)
	{
		cout << setw(5) << "окружность " << i + 1 << " -я " << endl;
		cout << setw(5) << "центр " << circle[i].coordinatesofthecenter1 << ", " << circle[i].coordinatesofthecenter2<< endl;
		cout << setw(5) << "радиус " << circle[i].radius << endl;;
		cout << setw(5) << "цвет " << circle[i].colour << endl;
		cout << endl;
	}

}

