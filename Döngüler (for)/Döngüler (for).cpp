#include <iostream>
using namespace std;
int main() {

	int tekToplam = 0;
	int tekSayac = 0;

	int ciftToplam = 0;
	int ciftSayac = 0;

	for (int i = 0; i <= 1000; i++) {
		cout << i;

		if (i % 2 == 0) {
			ciftSayac++;
			ciftToplam += i;
		}
		else {
			tekSayac++;
			tekToplam += i;
		}
	}
	cout << "\n" "\n";

	cout << "Tek Sayisi : " << tekSayac << endl;
	cout << "Cift Sayisi : " << ciftSayac << endl;

	cout << "Tek Toplam : " << tekToplam << endl;
	cout << "Cift Toplam : " << ciftToplam << endl;

	cout << "Tek Ortalama : " << tekToplam / tekSayac << endl;
	cout << "Cift Ortalama : " << ciftToplam / ciftSayac << endl;

	return 0;
}