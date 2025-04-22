#include <iostream>

using namespace std;

int main()
{
	float celcius;
	float fahrenheit = 0;

	cout << "Celcius degerini giriniz : ";
	cin >> celcius;

	fahrenheit = ((celcius * 18) / 10) + 32;
	cout << "Fahrenheit degeri : " << fahrenheit << endl;


	return 0;

}