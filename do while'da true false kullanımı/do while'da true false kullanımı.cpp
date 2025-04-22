#include <iostream>
#include <locale>

using namespace std;

void sifirGirisi();
void ondanBuyuk();
void dogruGiris();

int main()
{
    setlocale(LC_ALL, "Turkish");

    int firstNumber, secondNumber;
    bool tekrar = true;

    cout << "Programımıza hoş geldiniz!" << endl;
    cout << "Lütfen verilen talimatlara uygun şekilde sayı giriniz." << endl << endl;

    do {
        cout << "1. sayıyı giriniz: ";
        cin >> firstNumber;

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Hatalı giriş yaptınız. Lütfen tekrar deneyiniz." << endl << endl;
        }

        else if (firstNumber == 0) {
            sifirGirisi();
        }

        else if (firstNumber >= 10) {
            ondanBuyuk();
        }

        else {
            dogruGiris();
            tekrar = false;
        }

    } while (tekrar);

    tekrar = true;

    do {
        cout << "2. sayıyı giriniz: ";
        cin >> secondNumber;

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Hatalı giriş yaptınız. Lütfen tekrar deneyiniz." << endl << endl;
        }

        else if (secondNumber == 0) {
            sifirGirisi();
        }

        else if (secondNumber >= 10) {
            ondanBuyuk();
        }

        else {
            dogruGiris();
            tekrar = false;
        }

    } while (tekrar);

    cout << "Tebrikler! 0 ile 10 arasında iki geçerli sayı girdiniz." << endl;
    cout << "Birinci sayınız: " << firstNumber << ", İkinci sayınız: " << secondNumber << endl;

    cout << "Programımızı kullandığınız için teşekkür ederiz." << endl << endl;

    return 0;
}

void sifirGirisi() {
    cout << "Lütfen sıfır dışında bir sayı giriniz." << endl << endl;
}

void ondanBuyuk() {
    cout << "Lütfen 10'dan küçük bir sayı giriniz." << endl << endl;
}

void dogruGiris() {
    cout << "Geçerli bir giriş yaptınız, teşekkür ederiz." << endl << endl;
}



