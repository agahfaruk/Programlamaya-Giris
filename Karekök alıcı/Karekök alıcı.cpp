#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double sayi, sonuc;

    cout << "Bir sayi giriniz : ";
    cin >> sayi;
    sonuc = sqrt(sayi);

    cout << sayi << " sayisinin karekoku : " << sonuc << endl;

    system("pause");

    return 0;
}
