#include <iostream>
using namespace std;

void faktoriyel(int girilenSayi);

int main()
{
    int faktoriyelSayi;
    bool tekrar;
    do {
        cout << "\nFaktoriyeli alinacak sayiyi giriniz : ";
        cin >> faktoriyelSayi;
        faktoriyel(faktoriyelSayi);

        char devam;

        cout << "\nDevam icin E/e | Cikis icin H/h : ";
        cin >> devam;

        switch (devam) {
             
        case 'E':
            tekrar = true; 
            break;
        case 'e':
            tekrar = true;
            break;

        case 'H':
            tekrar = false;
            break;
        case 'h':
            tekrar = false;
            break;

        }
    } while (tekrar);

    return 0;
}

void faktoriyel(int girilenSayi) {
    int sonuc = 1;
    for (int i = 1; i <= girilenSayi; i++) {
        sonuc *= i;
    }
    cout << girilenSayi << "! = " << sonuc;
}