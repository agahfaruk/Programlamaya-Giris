#include <iostream>
using namespace std;

struct ogrenci {
    string ismi;
    string ogrenciNo;
    string bolumAdi;
    int dogumYili;
};

int main()
{
    ogrenci ogr1;

    cout << "Ogrenci adini giriniz (tek kelime veya kelime aralarina _ koyabilirsiniz) : ";
    cin >> ogr1.ismi;

    cout << "Ogrenci numarasini giriniz : ";
    cin >> ogr1.ogrenciNo;

    cout << "Ogrencinin bolumunu giriniz (tek kelime veya kelime aralarina _ koyabilirsiniz) : ";
    cin >> ogr1.bolumAdi;

    cout << "Ogrencinin dogum yilini giriniz : ";
    cin >> ogr1.dogumYili;

    cout << "\nOgrenci Bilgileri:\n";
    cout << "Isim: " << ogr1.ismi << "\n";
    cout << "Numara: " << ogr1.ogrenciNo << "\n";
    cout << "Bolum: " << ogr1.bolumAdi << "\n";
    cout << "Dogum Yili: " << ogr1.dogumYili << endl;

    return 0;
}
