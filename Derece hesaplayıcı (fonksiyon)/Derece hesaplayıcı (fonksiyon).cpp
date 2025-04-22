#include <iostream>
using namespace std;

int dereceCevir(int celcius) {
    int fahrenheit = celcius * 1.8 + 32;
    return fahrenheit;
}

int main()
{
    int celcius;
    cout << "Celcius degerini giriniz : ";
    cin >> celcius;

    cout << "Fahrenheit degeri : " << dereceCevir(celcius) << endl;

    return 0;
}