#include <iostream>
using namespace std;

void swapNumbers(int& x, int& y);

int main()
{
	cout << "*bu program girilen sayilarin yerlerini degistirir*";
	cout << endl;

	int firstNumber, secondNumber;

	do {
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
		}

		cout << endl << "1. sayiyi giriniz : ";
		cin >> firstNumber;

		if (cin.fail()) {
			cout << "HATA!" << endl;

		}
	} while (cin.fail());

	do {
		if (cin.fail()) {
			cin.clear();
			cin.ignore();
			cout << endl;
		}

		cout << "2. sayiyi giriniz : ";
		cin >> secondNumber;

		if (cin.fail()) {
			cout << "HATA!" << endl;

		}
	} while (cin.fail());

	cout << endl << "ilk durum : " << firstNumber << " " << secondNumber << endl;
	swapNumbers(firstNumber, secondNumber);
	cout << "son durum : " << firstNumber << " " << secondNumber << endl;

	return 0;
}

void swapNumbers(int& x, int& y)
{
	int z = x;
	x = y;
	y = z;
}