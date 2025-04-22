#include <iostream>
using namespace std;

char harf;

void basHarfi() {
    
    for (int i = 1; i <= 20; i++) {
        cout << harf << endl;
    }
    
}

int main()
{
    
    cout << "Bas harfi 20 kez yazilacak kelimeyi giriniz : ";
    cin >> harf;

    cout << "iste 20 defa kelimenin bas harfi (" << harf << ")" << endl;
    basHarfi();



    return 0;
}