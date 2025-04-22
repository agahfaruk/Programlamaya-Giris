#include <iostream>
using namespace std;

enum haftanin_gunleri { Pzt, Sa, Car, Pers, Cu, Cts, Pz };

int main()
{
    haftanin_gunleri gun1, gun2;

    gun1 = Pzt;
    gun2 = Sa;

    int fark = gun2 - gun1;
    cout << "Gunler arasindaki fark = " << fark << endl;

    return 0;
}
