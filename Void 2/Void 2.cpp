#include <iostream>
using namespace std;

void mesajYazdir(int tekrarSayisi);

int main()
{
    int girilenSayi;

    cout << "Kac defa mesaj almak istiyorsunuz? : ";
    cin >> girilenSayi;
    mesajYazdir(girilenSayi);


    return 0;
}

void mesajYazdir(int tekrarSayisi) {
    for (int i = 1; i <= tekrarSayisi; i++) {
        cout << "Mesaj " << i << endl;
    }
}
