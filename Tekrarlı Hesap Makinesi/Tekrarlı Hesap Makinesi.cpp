#include <iostream>
using namespace std;

int main() {
    int sayi1, sayi2;
    char islem;

    // Geçerli bir işlem seçimi yapılana kadar döngü.
    do {
        cout << "Islem seciniz (+, -, *, /) : ";
        cin >> islem;
        if (islem != '+' && islem != '-' && islem != '*' && islem != '/') {
            cout << "Yanlis karakter girisi, lutfen tekrar deneyiniz!" << endl;
        }
    } while (islem != '+' && islem != '-' && islem != '*' && islem != '/');

    // İlk sayıyı alma.
    cout << "Ilk sayiyi giriniz : ";
    while (!(cin >> sayi1)) { // Sayı girişi doğru değilse.
        cin.clear();          // Hata bayraklarını temizle.
        cin.ignore(1000, '\n'); // Geçersiz girdiyi temizle.
        cout << "Yanlis karakter girisi, lutfen tekrar deneyiniz!" << endl;
        cout << "Ilk sayiyi giriniz : ";
    }

    // İkinci sayıyı alma.
    do {
        cout << "Ikinci sayiyi giriniz : ";
        while (!(cin >> sayi2)) { // Sayı girişi doğru değilse.
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Yanlis karakter girisi, lutfen tekrar deneyiniz!" << endl;
            cout << "Ikinci sayiyi giriniz : ";
        }

        if (islem == '/' && sayi2 == 0) {
            cout << "Sifira bolme yapilamaz!" << endl;
        }
    } while (islem == '/' && sayi2 == 0);

    // İşlem ve sonuç.
    switch (islem) {
    case '+':
        cout << "Sonuc : " << sayi1 + sayi2 << endl;
        break;
    case '-':
        cout << "Sonuc : " << sayi1 - sayi2 << endl;
        break;
    case '*':
        cout << "Sonuc : " << sayi1 * sayi2 << endl;
        break;
    case '/':
        cout << "Sonuc : " << sayi1 / sayi2 << endl;
        break;
    default:
        cout << "Hata!" << endl;
    }

    return 0;
}
