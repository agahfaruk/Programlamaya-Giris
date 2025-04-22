// Geliştirici : Agah Faruk Küçük
// Öğrenci No  : b241200004
// Ödev No     : 1
// Ödev Konusu : Lojistik Planlama

// Bu program, lojistik planlaması yapan bir sistemin simülasyonunu gerçekleştirir.
// Programda, belirli konumlar ve bu konumlardaki talep adresleri tanımlanmıştır.
// "Kuryenin" bu konumlar arasında hareketi simüle edilirken, kullanılan veriler ve toplam yol hesaplaması görüntülenir.
// Programın amacı, lojistik yolculuklarının izlenmesini sağlayan bir simülasyon yapmaktır.

// Bu proje sayesinde geciktirme (sleep) ve dosya kaydetme (ofstream) işlemlerini öğrendim.
// Ayrıca pointer kullanarak bellekteki verilere referans gösterme konusunu da uygulamalı olarak öğrenmiş oldum.

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <fstream>

using namespace std;

int lojistik[10][10];
int gecilen[10][10] = { false };

int musteriX1 = 3, musteriY1 = 4;
int musteriX2 = 1, musteriY2 = 5;
int musteriX3 = 6, musteriY3 = 8;
int musteriX4 = 4, musteriY4 = 7;
int musteriX5 = 7, musteriY5 = 6;

int* musteri1 = &lojistik[musteriX1][musteriY1];
int* musteri2 = &lojistik[musteriX2][musteriY2];
int* musteri3 = &lojistik[musteriX3][musteriY3];
int* musteri4 = &lojistik[musteriX4][musteriY4];
int* musteri5 = &lojistik[musteriX5][musteriY5];


int toplamYol = 0;

void kaydetToplamYol();
void lojistikSystem(int a, int b);
void kurye();

int main()
{
    setlocale(LC_ALL, "Turkish");

    cout << "Talep Adresleri:" << endl;
    cout << "Konum 1 : " << "(" << musteriX1 + 1 << "," << musteriY1 + 1 << ")" << " - " << "Adres : " << musteri1 << endl;
    cout << "Konum 2 : " << "(" << musteriX2 + 1 << "," << musteriY2 + 1 << ")" << " - " << "Adres : " << musteri2 << endl;
    cout << "Konum 3 : " << "(" << musteriX3 + 1 << "," << musteriY3 + 1 << ")" << " - " << "Adres : " << musteri3 << endl;
    cout << "Konum 4 : " << "(" << musteriX4 + 1 << "," << musteriY4 + 1 << ")" << " - " << "Adres : " << musteri4 << endl;
    cout << "Konum 5 : " << "(" << musteriX5 + 1 << "," << musteriY5 + 1 << ")" << " - " << "Adres : " << musteri5 << endl;
    cout << endl;

    cout << "Başlangıç Matris Durum:" << endl;
    lojistikSystem(0, 0);
    Sleep(2000);

    lojistikSystem(1, 0);
    Sleep(500);
    lojistikSystem(2, 0);
    Sleep(500);
    lojistikSystem(3, 0);
    Sleep(500);
    lojistikSystem(3, 1);
    Sleep(500);
    lojistikSystem(3, 2);
    Sleep(500);
    lojistikSystem(3, 3);
    Sleep(500);
    lojistikSystem(3, 4);
    Sleep(500);
    lojistikSystem(3, 5);
    Sleep(500);
    lojistikSystem(2, 5);
    Sleep(500);
    lojistikSystem(1, 5);
    Sleep(500);
    lojistikSystem(1, 6);
    Sleep(500);
    lojistikSystem(1, 7);
    Sleep(500);
    lojistikSystem(2, 7);
    Sleep(500);
    lojistikSystem(3, 7);
    Sleep(500);
    lojistikSystem(4, 7);
    Sleep(500);
    lojistikSystem(4, 8);
    Sleep(500);
    lojistikSystem(5, 8);
    Sleep(500);
    lojistikSystem(6, 8);
    Sleep(500);
    lojistikSystem(7, 8);
    Sleep(500);
    lojistikSystem(7, 7);
    Sleep(500);
    lojistikSystem(7, 6);
    Sleep(500);
    lojistikSystem(7, 5);
    Sleep(500);
    lojistikSystem(7, 4);
    Sleep(500);
    lojistikSystem(7, 3);
    Sleep(500);
    lojistikSystem(7, 2);
    Sleep(500);
    lojistikSystem(7, 1);
    Sleep(500);
    lojistikSystem(7, 0);
    Sleep(500);
    lojistikSystem(6, 0);
    Sleep(500);
    lojistikSystem(5, 0);
    Sleep(500);
    lojistikSystem(4, 0);
    Sleep(500);
    lojistikSystem(3, 0);
    Sleep(500);
    lojistikSystem(2, 0);
    Sleep(500);
    lojistikSystem(1, 0);
    Sleep(500);
    lojistikSystem(0, 0);

    cout << "\nSon Toplam Yol: " << toplamYol << "\n" << endl;

    kaydetToplamYol();

    return 0;
}

void kurye() {
    cout << "\033[31m" << setw(4) << "K" << "\033[0m";
}

void lojistikSystem(int a, int b) {
    if (b != 0 || a != 0) {
        cout << "\n";
        cout << "İlerliyor..." << endl;
    }
    else {
        cout << "\n" << "K (0,0) noktasında" << endl;
    }

    int i;
    int j;
    int elemanEkleyici = 1;
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            lojistik[i][j] = elemanEkleyici++;
        }
    }

    gecilen[a][b] = true;
    toplamYol += lojistik[a][b];

    for (int k = 0; k < 10; k++) {
        for (int l = 0; l < 10; l++) {
            if (l == a && k == b) {
                kurye();
            }
            else if (gecilen[l][k] && !(l == musteriX1 && k == musteriY1) && !(l == musteriX2 && k == musteriY2) && !(l == musteriX3 && k == musteriY3) && !(l == musteriX4 && k == musteriY4) && !(l == musteriX5 && k == musteriY5)) {
                cout << "\033[32m" << setw(4) << lojistik[l][k] << "\033[0m";
            }
            else if (l == musteriX1 && k == musteriY1) {
                cout << "\033[34m" << setw(4) << *musteri1 << "\033[0m";
            }
            else if (l == musteriX2 && k == musteriY2) {
                cout << "\033[34m" << setw(4) << *musteri2 << "\033[0m";
            }
            else if (l == musteriX3 && k == musteriY3) {
                cout << "\033[34m" << setw(4) << *musteri3 << "\033[0m";
            }
            else if (l == musteriX4 && k == musteriY4) {
                cout << "\033[34m" << setw(4) << *musteri4 << "\033[0m";
            }
            else if (l == musteriX5 && k == musteriY5) {
                cout << "\033[34m" << setw(4) << *musteri5 << "\033[0m";
            }
            else {
                cout << setw(4) << lojistik[l][k];
            }
        }
        cout << endl;
    }
    cout << "Güncel Toplam Yol: " << toplamYol << endl;
}

void kaydetToplamYol()
{
    ofstream dosya("Cost.txt", ios::trunc);

    if (dosya.is_open())
    {
        dosya << "Talep Adresleri:" << endl;
        dosya << "Konum 1 : " << "(" << musteriX1 + 1 << "," << musteriY1 + 1 << ")" << " - " << "Adres : " << musteri1 << endl;
        dosya << "Konum 2 : " << "(" << musteriX2 + 1 << "," << musteriY2 + 1 << ")" << " - " << "Adres : " << musteri2 << endl;
        dosya << "Konum 3 : " << "(" << musteriX3 + 1 << "," << musteriY3 + 1 << ")" << " - " << "Adres : " << musteri3 << endl;
        dosya << "Konum 4 : " << "(" << musteriX4 + 1 << "," << musteriY4 + 1 << ")" << " - " << "Adres : " << musteri4 << endl;
        dosya << "Konum 5 : " << "(" << musteriX5 + 1 << "," << musteriY5 + 1 << ")" << " - " << "Adres : " << musteri5 << endl;
        dosya << endl;
        dosya << "Son Toplam Yol: " << toplamYol << endl;

        dosya.close();
    }
    else
    {
        cout << "Dosya açılamadı!" << endl;
    }
}