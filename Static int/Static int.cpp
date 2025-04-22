#include <iostream>
using namespace std;

int golAt() {
    // int i = 0; -> her defasında 0 yapar bu yüzden artmaz
    static int i = 0; // static yapısı sayesinde değişebilir özellik kazanır
    i++;
    cout << "gol sayisi : " << i << endl;
    return i;
}

int main()
{
    golAt();
    golAt();
    golAt();

    return 0;
}