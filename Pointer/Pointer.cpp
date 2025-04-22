#include <iostream>
using namespace std;
int main()
{
	int x;
	int* xptr;

	x = 3;
	xptr = &x;

	cout << "x'in adresi         : " << &x << endl;
	cout << "xptr'in icerigi     : " << xptr << endl;
	cout << "x'in degeri         : " << x << endl;
	cout << "(*xptr)'nin degeri  : " << *xptr << endl;

	cout << "\n\n* ve & operatorleri birbirinin tumleyenidir" << endl;
	cout << "&*xptr: " << &*xptr << endl;
	cout << "*&xptr: " << *&xptr << endl;

	//-----------------------------------------------------------------//
	cout << "\n--------------------------------------------\n" << endl;
	//-----------------------------------------------------------------//

	int sayilar[5];
	int sayi = 15;
	int* sayiPtr;

	sayiPtr = &sayi;
	*sayiPtr = 20;

	int* p;
	p = sayilar;

	*p = 10;

	p++;
	*p = 20;

	p = sayilar + 2;
	*p = 30;

	p = &sayilar[3];
	*p = 40;

	p = addressof(sayilar[4]);
	*p = 50;

	cout << "Dizinin elemanlari: " << endl;
	    for (int i = 0; i < 5; i++) {
		    cout << "Eleman " << i + 1 << ": " << sayilar[i] << endl;
		}

	return 0;
}