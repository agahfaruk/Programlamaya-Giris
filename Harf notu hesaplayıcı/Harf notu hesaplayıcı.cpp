#include <iostream>
using namespace std;

int main() {

    float ort;
    cout << "Ortalama Giriniz : ";
    cin >> ort;

    if (ort >= 90)
        cout << "AA";
    else if (ort >= 80)
        cout << "AB";
    else if (ort >= 70)
        cout << "BB";
    else if (ort >= 60)
        cout << "BC";
    else if (ort >= 50)
        cout << "CC";
    else if (ort >= 40)
        cout << "CD";
    else if (ort >= 30)
        cout << "DD";
    else if (ort >= 20)
        cout << "DF";
    else if (ort >= 10)
        cout << "FF";
    else if (ort >= 0)
        cout << "FF";

    return 0;
}