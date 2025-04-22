#include <iostream>
using namespace std;

int kareAl(int sayi) {
	int sonuc = sayi * sayi;
	return sonuc;
}

int main()
{
	int girilenSayi;
	cout << "karesi alinacak sayiyi giriniz : ";
	cin >> girilenSayi;
	cout << kareAl(girilenSayi);



	return 0;
}