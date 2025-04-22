#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Calisan {
    string isim;
    string rol;
};

struct Oyun {
    string isim;
    string aciklama;
    double fiyat;
};

void anaMenuGoster();
void firmaBilgisiGoster();
void urunMenusuGoster(Oyun sepet[], int& sepetSayisi);
void sepetiGoruntule(const Oyun sepet[], int sepetSayisi);
void alisverisiTamamla(Oyun sepet[], int& sepetSayisi);

int main() {
    Oyun sepet[10];
    int sepetSayisi = 0;
    int secim;

    do {
        anaMenuGoster();
        cin >> secim;

        switch (secim) {
        case 1:
            firmaBilgisiGoster();
            break;
        case 2:
            urunMenusuGoster(sepet, sepetSayisi);
            break;
        case 3:
            cout << "Cikis yapiliyor...\n";
            break;
        default:
            cout << "Gecersiz secim. Lutfen tekrar deneyin.\n";
        }
    } while (secim != 3);

    return 0;
}

void anaMenuGoster() {
    cout << "\n******CEKUS BILISIM ANA MENUSU******\n\n";
    cout << "1. Firma Hakkinda\n";
    cout << "2. Urun Inceleme ve Alisveris\n";
    cout << "3. Cikis\n";
    cout << "Seciminizi yapiniz: ";
}

void firmaBilgisiGoster() {
    cout << "\nFirma Hakkinda Bilgi:\n";
    cout << "Cekus Bilisim, teknoloji ve oyun sektorunde lider bir firmadir.\n";
    cout << "cekus@cekusbilisim.com\n";
    cout << "+90 (264) 531 28 52\n\n";

    Calisan calisanlar[5] = {
        {"Melik Mirza Celik", "Yonetici"},
        {"Agah Faruk Kucuk", "Yazilim Gelistirici"},
        {"Sonay Sude Savci", "Tasarimci"},
        {"Tugrul Ahmadzada", "Sistem Analisti"},
        {"Eren Utku Cakar", "Test Muhendisi"},
    };

    cout << "Calisanlar:\n";
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << calisanlar[i].isim << " (" << calisanlar[i].rol << ")\n";

    }

    int calisan;
    do {
        cout << "\n6. Ana Menuye Don\n";
        cout << "\nLutfen bilgi almak istediginiz kisiyi secin: ";
        cin >> calisan;
        switch (calisan) {
        case 1:
            cout << endl << calisanlar[0].isim << ", firmamizda " << calisanlar[0].rol << " rolunu ustlenmektedir.\nSakarya Universitesi, Bilisim Sistemleri Muhendisligi mezunudur.\n ";
            cout << "\nmirza@cekusbilisim.com" << endl << "+90 555 123 4567\n";
            break;
        case 2:
            cout << endl << calisanlar[1].isim << ", firmamizda " << calisanlar[1].rol << " rolunu ustlenmektedir.\nSakarya Universitesi, Bilisim Sistemleri Muhendisligi mezunudur.\n ";
            cout << "\nagah@cekusbilisim.com" << endl << "+90 555 456 5678\n";
            break;
        case 3:
            cout << endl << calisanlar[2].isim << ", firmamizda " << calisanlar[2].rol << " rolunu ustlenmektedir.\nSakarya Universitesi, Bilisim Sistemleri Muhendisligi mezunudur.\n ";
            cout << "\nsonay@cekusbilisim.com" << endl << "+90 555 678 8912\n";
            break;
        case 4:
            cout << endl << calisanlar[3].isim << ", firmamizda " << calisanlar[3].rol << " rolunu ustlenmektedir.\nSakarya Universitesi, Bilisim Sistemleri Muhendisligi mezunudur.\n ";
            cout << "\ntoghrul@cekusbilisim.com" << endl << "+90 555 891 1234\n";
            break;
        case 5:
            cout << endl << calisanlar[4].isim << ", firmamizda " << calisanlar[4].rol << " rolunu ustlenmektedir.\nSakarya Universitesi, Bilisim Sistemleri Muhendisligi mezunudur.\n ";
            cout << "\neren@cekusbilisim.com" << endl << "+90 555 345 5441\n";
            break;
        case 6:
            cout << "\nAna menuye donuluyor...\n";
            break;
        default:
            cout << "\nGecersiz secim!\n";
        }
    } while (calisan != 6);
}

void urunMenusuGoster(Oyun sepet[], int& sepetSayisi) {
    Oyun oyunlar[5] = {
        {"GTA V", "Aksiyon dolu bir macera oyunu.", 500.0},
        {"ASETTO CORSA", "Simulasyon sevenler icin harika bir deneyim.", 340.0},
        {"VICTORIA 3", "Strateji oyunu sevenler icin ideal.", 300.0},
        {"CS:GO", "Birinci sahis nisanci oyunu.", 270.0},
        {"FIFA", "Futbolseverler icin harika bir oyun.", 970.0}
    };

    int secim;

    do {
        cout << "\nUrun Menusu:\n";
        for (int i = 0; i < 5; ++i) {
            cout << i + 1 << ". " << oyunlar[i].isim << " - " << oyunlar[i].aciklama << " (Fiyat: " << oyunlar[i].fiyat << " TL)\n";
        }
        cout << "6. Sepeti Goruntule\n";
        cout << "7. Alisverisi Tamamla\n";
        cout << "8. Ana Menuye Don\n";
        cout << "Seciminizi yapiniz: ";
        cin >> secim;

        if (secim >= 1 && secim <= 5) {
            if (sepetSayisi < 10) {
                sepet[sepetSayisi] = oyunlar[secim - 1];
                sepetSayisi++;
                cout << oyunlar[secim - 1].isim << " sepete eklendi.\n";
            }
            else {
                cout << "Sepetiniz dolu. Daha fazla oyun ekleyemezsiniz.\n";
            }
        }
        else if (secim == 6) {
            sepetiGoruntule(sepet, sepetSayisi);
        }
        else if (secim == 7) {
            alisverisiTamamla(sepet, sepetSayisi);
        }
        else if (secim != 8) {
            cout << "Gecersiz secim. Lutfen tekrar deneyin.\n";
        }
    } while (secim != 8);
}

void sepetiGoruntule(const Oyun sepet[], int sepetSayisi) {
    cout << "\nSepetiniz:\n";
    if (sepetSayisi == 0) {
        cout << "Sepetiniz bos.\n";
    }
    else {
        double toplam = 0;
        for (int i = 0; i < sepetSayisi; ++i) {
            cout << i + 1 << ". " << sepet[i].isim << " (" << sepet[i].fiyat << " TL)\n";
            toplam += sepet[i].fiyat;
        }
        cout << "Toplam: " << toplam << " TL\n";
    }
}

void alisverisiTamamla(Oyun sepet[], int& sepetSayisi) {
    if (sepetSayisi == 0) {
        cout << "\nSepetiniz bos. Satin alma islemi yapilamadi.\n";
        return;
    }

    double toplam = 0;
    for (int i = 0; i < sepetSayisi; ++i) {
        toplam += sepet[i].fiyat;
    }

    int odemeYontemi;
    cout << "\n1. Pesin Odeme\n";
    cout << "2. Taksitli Odeme\n";
    cout << "Odeme yontemini seciniz: ";
    cin >> odemeYontemi;

    if (odemeYontemi == 1) {
        cout << "\nSatin alma islemi basariyla tamamlandi.\n";
        cout << "Toplam: " << toplam << " TL\n";
    }
    else if (odemeYontemi == 2) {
        int taksit;
        cout << "\nTaksit secenekleri:\n";
        cout << "1. 2 ay\n";
        cout << "2. 3 ay\n";
        cout << "3. 6 ay\n";
        cout << "Kac ay taksit istiyorsunuz: ";
        cin >> taksit;

        if (taksit == 1 || taksit == 2 || taksit == 3) {
            taksit = (taksit == 1) ? 2 : (taksit == 2) ? 3 : 6;
            double taksitTutari = toplam / taksit;
            cout << "\nSatin alma islemi tamamlandi.\n";
            cout << taksit << " ay taksit yapildi. Her ay " << taksitTutari << " TL odeyeceksiniz.\n";
        }
        else {
            cout << "Gecersiz taksit secenegi.\n";
            return;
        }
    }
    else {
        cout << "Gecersiz odeme yontemi.\n";
        return;
    }

    ofstream dosya("fatura.txt");
    if (dosya.is_open()) {
        dosya << "FATURA:\n";
        dosya << "--------------------------------------\n";
        for (int i = 0; i < sepetSayisi; ++i) {
            dosya << sepet[i].isim << " - " << sepet[i].fiyat << " TL\n";
        }
        dosya << "--------------------------------------\n";
        dosya << "Toplam: " << toplam << " TL\n";
        dosya.close();
        cout << "Fatura 'fatura.txt' dosyasina kaydedildi.\n";
    }
    else {
        cout << "Fatura dosyasi olusturulurken bir hata olustu.\n";
    }

    cout << "\nFATURA:\n";
    cout << "--------------------------------------\n";
    for (int i = 0; i < sepetSayisi; ++i) {
        cout << sepet[i].isim << " - " << sepet[i].fiyat << " TL\n";
    }
    cout << "--------------------------------------\n";
    cout << "Toplam: " << toplam << " TL\n";

    sepetSayisi = 0;
}