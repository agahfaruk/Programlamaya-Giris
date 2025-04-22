#include <iostream>
using namespace std;

int kare(int sayi) {
    int sonuc = sayi * sayi;
    return sonuc;
}

int main() {
    int sayi;

    cout << "Bir sayi girin: ";
    cin >> sayi;

    int sonuc = kare(sayi);

    cout << "Sayinin karesi: " << sonuc << endl;

    return 0;
}
