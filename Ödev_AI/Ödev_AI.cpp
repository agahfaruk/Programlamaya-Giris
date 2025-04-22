// Ödev'in Yapay Zeka ile yapılmış hali

#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main() {
    srand(time(0));
    int dizi[10][10];
    int mavi_x[5], mavi_y[5];
    int toplam = 0;
    bool visited_cells[10][10] = { false };

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            dizi[i][j] = rand() % 100;
        }
    }

    ofstream file("Cost.txt");
    for (int i = 0; i < 5; i++) {
        mavi_x[i] = rand() % 10;
        mavi_y[i] = rand() % 10;
        gotoxy(0, i);
        cout << i + 1 << ". mavi nokta: [" << mavi_y[i] << "][" << mavi_x[i] << "] = " << dizi[mavi_y[i]][mavi_x[i]] << " Adres: " << &dizi[mavi_y[i]][mavi_x[i]];
        file << i + 1 << ". mavi nokta: [" << mavi_y[i] << "][" << mavi_x[i] << "] = " << dizi[mavi_y[i]][mavi_x[i]] << " Adres: " << &dizi[mavi_y[i]][mavi_x[i]] << endl;
    }

    gotoxy(0, 6);
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            bool isMavi = false;
            for (int k = 0; k < 5; k++) {
                if (i == mavi_y[k] && j == mavi_x[k]) {
                    setColor(9);
                    isMavi = true;
                    break;
                }
            }
            if (!isMavi) {
                if (visited_cells[i][j]) setColor(2);
                else setColor(7);
            }
            cout << setw(5) << dizi[i][j];
        }
        cout << endl << endl;
    }

    int curX = 0, curY = 0;
    visited_cells[curY][curX] = true;
    gotoxy(curX * 5, curY * 2 + 6);
    setColor(12);
    cout << setw(5) << "K";

    bool visited[5] = { false };
    for (int v = 0; v < 5; v++) {
        int closest = -1;
        int minDist = 999;

        for (int i = 0; i < 5; i++) {
            if (!visited[i]) {
                int dist = abs(curX - mavi_x[i]) + abs(curY - mavi_y[i]);
                if (dist < minDist) {
                    minDist = dist;
                    closest = i;
                }
            }
        }

        visited[closest] = true;

        while (curX != mavi_x[closest] || curY != mavi_y[closest]) {
            Sleep(500);
            gotoxy(curX * 5, curY * 2 + 6);
            bool isMavi = false;
            for (int k = 0; k < 5; k++) {
                if (curY == mavi_y[k] && curX == mavi_x[k]) {
                    setColor(9);
                    isMavi = true;
                    cout << setw(5) << dizi[curY][curX];
                    break;
                }
            }
            if (!isMavi) {
                setColor(2);
                cout << setw(5) << dizi[curY][curX];
            }

            if (curX < mavi_x[closest]) curX++;
            else if (curX > mavi_x[closest]) curX--;
            else if (curY < mavi_y[closest]) curY++;
            else if (curY > mavi_y[closest]) curY--;

            visited_cells[curY][curX] = true;
            gotoxy(curX * 5, curY * 2 + 6);
            setColor(12);
            cout << setw(5) << "K";
            toplam += dizi[curY][curX];
            gotoxy(0, 28);
            setColor(7);
            cout << "Toplam Yol: " << toplam;
        }
    }

    while (curX != 0 || curY != 0) {
        Sleep(500);
        gotoxy(curX * 5, curY * 2 + 6);
        bool isMavi = false;
        for (int k = 0; k < 5; k++) {
            if (curY == mavi_y[k] && curX == mavi_x[k]) {
                setColor(9);
                isMavi = true;
                cout << setw(5) << dizi[curY][curX];
                break;
            }
        }
        if (!isMavi) {
            setColor(2);
            cout << setw(5) << dizi[curY][curX];
        }

        if (curX > 0) curX--;
        else if (curY > 0) curY--;
        visited_cells[curY][curX] = true;
        gotoxy(curX * 5, curY * 2 + 6);
        setColor(12);
        cout << setw(5) << "K";
        toplam += dizi[curY][curX];
        gotoxy(0, 28);
        setColor(7);
        cout << "Toplam Yol: " << toplam;
    }

    file << "\nToplam Yol: " << toplam;
    file.close();

    gotoxy(0, 29);
    cout << "\n*Toplam yol ve mavi noktalar Cost.txt olarak kaydedildi*";
    cout << "\n\n";
    return 0;
}
