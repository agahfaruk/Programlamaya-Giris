#include <iostream>
#include <string>
using namespace std;
string isim;
int main() {

    cout << "Isim giriniz : ";
    // cin >> isim;
    getline(cin, isim);

    cout << "Merhaba " << isim << endl;

    return 0;
}