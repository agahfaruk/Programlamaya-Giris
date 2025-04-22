#include <iostream>
#include <string>
using namespace std;
int main()
{
    int yas;
    string cinsiyet;

    cout << "Yasinizi giriniz : ";
    cin >> yas;

    //Burayı döngüye alıp tekrar yaş sormasını sağlayacağım
// Yaş değerinin geçerli bir sayı olarak girilip girilmediğini kontrol eder
    if (cin.fail()) {
        cout << "Uzgunuz bir sorunla karsilasildi :(";
        return 0;
    }

    cout << "Cinsiyetinizi giriniz (erkek/kadin) : ";
    cin >> cinsiyet;

    //Cinsiyet ve yaş koşullarını kontrol eder
    if (cinsiyet == "erkek" && yas >= 18) {
        cout << "Siteye girebilirsiniz";
    }
    else if (cinsiyet == "kadin" && yas < 18) {
        cout << "Siteye GIREMEZSINIZ";
    }
    else if (cinsiyet == "kadin" && yas >= 18) {
        cout << "Siteye GIREMEZSINIZ";
    }
    else if (cinsiyet == "erkek" && yas < 18) {
        cout << "Siteye GIREMEZSINIZ";
    }
    else {
        cout << "Uzgunuz bir sorunla karsilasildi :(";
    }
    /*else {
        cout << "Siteye GIREMEZSINIZ"
    }*/

    return 0;
}



/*// Yaş değerinin geçerli bir sayı olarak girilip girilmediğini kontrol eder
    if (cin.fail()) {
        cout << "Uzgunuz bir sorunla karsilasildi :(";
        return 0;
    }*/